#include <stdio.h>

int main()
{
	char cards[50] = "Ваше мнение!";
	cards[] = 'е';
	*cards = 'б';
	printf("Размер вашего файла: %p, Размер вашего массива: %d",sizeof(card), sizeof(cards));
	printf("%s", cards);
}