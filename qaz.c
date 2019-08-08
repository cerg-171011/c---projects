#include <stdio.h>

int main()
{
	int vozrast;
	int *age = vozrast;
	printf("Введите ваш возраст:\n");
	scanf("%d", &age);
	printf("Vash age - %d\n", *age);

}