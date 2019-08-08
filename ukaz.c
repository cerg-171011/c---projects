#include <stdio.h>

int ukaz(int *num1, int *num2)
{
	*num1++;
	*num2++;
	printf("%d%d\n", *num1, *num2);
}

int main()
{
	int a = 30;
	int b = 32;
	ukaz(&a, &b);
}