#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[10];
	puts("Введите нахвание карты:");
	scanf("%s", card_name);
	int val = 0;
	if (card_name[0] == 'A')
	{
	val = 9;
	}
	else if (card_name[0] == 'B')
	{
	val = 10;
	}
	else 
	{
	val = atoi(card_name);
	}
	printf("Ценность карты: %d\n",val);
}