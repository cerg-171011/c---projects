#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card [50], card2 [50];
	puts("Введите вашу карту:");
	scanf("%s", card);
	int val, val2;
	switch(card[0])
	{
		case 'K':
			val = 10;
			break;
		
		case 'A':
			val == 11;
			break;
		
		case 'D':
			val ==10;
			break;
		
		default:
			val == atoi(card);
	}
	printf("Ваша карта - %s, Ее значение - %d\n", card, val);
	puts("Введите вашу новую карту:");
	scanf("%s", card2);
	switch(card2[1])
	{
		case 'H':
			val2 == 10;
			break;
		
		case 'J':
			val2 ==11;
			break;
		
		case 'O':
			val2 == 10;
			break;
		
		default:
			val2 == atoi(card2);
	}
	printf("Ваша новая карта - %s, Ее значение - %d\n", card2, val2);  
}
