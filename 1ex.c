#include <stdio.h>
int main()
{
	int number;
	printf("Введите числа:\n");
	scanf("%i\n", &number);
	if(number % 2 == 0)
		printf("%d - четное", number);
	else
		printf("%d - нечетное", number);
}