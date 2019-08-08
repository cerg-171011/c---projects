#include <stdio.h>
int zapros();
char ina();

int main()
{
	
	zapros();
	printf("сумма = %d\n", zapros());
	ina();
}

int zapros()
{
	int a, b;
	a = 10, b = 50;
	int sum = a + b;
	return sum;
}

char ina()
{
	char ot[50];
	printf("Введите ваше имя:");
	scanf("%s", ot);
	printf("Ваше имя - %s", ot);
}