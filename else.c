#include <stdio.h>
int main()
{
	char card[50];
	int pow;
	puts("Введите карту:");
	scanf("%s", card);
	 if (card == "Tuz")
		pow = 11;
	  else if (card == "King", "girl", "man")
		pow = 10;
	   else 
		printf("Такой карты нет, выберите другую карту");
	printf("Ваша карта - %s, Ее сила - %d", card, pow);
}