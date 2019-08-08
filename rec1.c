#include <stdio.h>
int sumNumb(int n);

int main()
{
	int num;
	printf("Введите натуральное число:\n");
	scanf("%d", &num);
	printf("Сумма = %d", sumNumb(num));
}

int sumNumb(int n)
{
	int sum;
	if (n != 0)
		return n + sumNumb(n -1);
	else
		return n;
}