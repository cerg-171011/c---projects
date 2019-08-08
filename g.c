#include <stdio.h>
#include <stdlib>
int main()
{
	int pow;
	int pow2;
	char card2[50];
	puts("Введите карту:");
	scanf("%s", card2);
		switch(card2[0])
		{
		case 'A':
			pow = 10;
			printf("Вы выбрали туз!!");
			break;
		case 'Q':
			pow = 10;
			printf("Вы выбрали даму!!!");
			break;
		case 'K':
			pow = 10;
			printf("Вы выбрали короля");
			break;
		default:
			pow2 = pow = atoi(card2);
			printf("Вы выбрали карту %d", pow2);
			break;



}