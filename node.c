#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node 
{
	char *question;
	struct node *no;
	struct node *yes;
}node;

int yes_no(char *question)
{
	char answer[3];
	printf("%s? (y/n)", question);
	fgets(answer, 3, stdin);
	return answer[0] == 'y';
}

node* create (char *question)
{
	node *n = malloc(sizeof(node));
	n->question = strdup(question);
	n->yes = NULL;
	n->no = NULL;
	return n;
}

void release (node *n)
{
	if (n)
		{
		if (n->no)
			release(n->no);
		if (n->yes)
			release(n->yes);
		if (n->question)
			free(n->question);
		free(n);
		}	
}

int main()
{
	char question[80];
	char suspect[40];
	node *start_node = create("Носит ли подозреваемый усы?");
	start_node->no = create("Лоретта Барншворц");
	start_node->yes = create("Сергей Петров");
		node *current;
		do{
			current = start_node;
			while(1)
			{
				if(yes_no(current->question))
				{
					if(current->yes)
					{
						current = current->yes;
					}
					else
					{
						printf("подозреваемый опознан!\n");
						break;
					}
				}	else if(current->no)
					{
						current = current->no;
					}
					else{
						printf("Кто подозреваемый?\n");
						fgets(suspect, 40, stdin);
						node *yes_node = create(suspect);
						current->yes = yes_node;
						node *no_node = create(current->question);
						current->no = no_node;
						printf("Задайте мне вопрос который подходит для %s но не для %s", suspect, current->question);
						fgets(question, 80, stdin);
						current->question = strdup(question);
						break; 
					}
				}
			}
			while(yes_no("Выполнить еще раз?"));
			release(start_node);
			return 0;
		}
