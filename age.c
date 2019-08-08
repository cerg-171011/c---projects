#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
int main()
{
	char names[SIZE];
	puts("Введите ваше имя:");
	scanf("%s", names);
	int ages;
	if (names == "Sergey")
	{
	ages = 22;
	}
	else if (names == "Regina")
	{
	ages = 23;
	}
	else
	{
	printf("Вы ввели не существующее имя!!\n");
	}
	printf("Ваше имя - %s, Ваш возраст - %d\n", names, ages);
}
