#include <stdio.h>
#define SNAKE_SIZE 3 
int a[100][100];
int head_x[0];
int head_y[0];
int change_x;
int change_y;
int body_x[100];
int body_y[100];

void map()
{
	for(int i = 0; i < 10; i++)
		for(int j = 0; j < 10; j++)
		{
			if(i == 0 || i == 9)
			{
				if(j == '\0')
					printf("\n");
				printf("# ");
			}
			else if(i >= 0 && i <= 10)
			{
				if(j == 0)
					printf("\n#");
				else if(j == 9)
				{
					printf("                 #");
				}
			else
				if(i > 0 && i < 9)
					if(j > 0 && j < 9)
						a[i][j];	
			}
		}
}

void snake()
{
	for(int i = 1; i < SNAKE_SIZE; i++)
	{
		a[body_x[i]][body_y[i]] == '@'; 	
	}

	if(change_x == 1 && change_y == 0)
		a[head_x[0]][head_y[0]] == "!"; 
	if(change_x == -1 && change_y == 0)
		a[head_x[0]][head_y[0]] == "v";
	if(change_x == 0 && change_y == 1)
		a[head_x[0]][head_y[0]] == ">";
	if(change_x == 0 && change_y == -1)
		a[head_x[0]][head_y[0]] == "<"; 	  
}

int main()
{
	map();
}