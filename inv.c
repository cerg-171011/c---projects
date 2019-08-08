#include <stdio.h>
#include <stdlib.h>

int sumNumb(int n);
int factNumb(int n);

int main()
{
	int number, sum, fact, number2;
	printf("Введите число для факториала:\n");
	scanf("%d", &number2);
	printf("Введите число для суммы:\n");
	scanf("%d", &number);
	printf("Сумма чисел от 0 - %d = %d\n", number, sumNumb(number));
	printf("Факториал числа - %d = %d\n", number2, factNumb(number2));
}

int sumNumb(int n)
{
	int sum, j;
	j = n;
	if(j != 0)
	{
		for(int i = 0; i <= n; i++)
		{
			sum += i;
			j--;
		}
	}
	return sum;
}

int factNumb(int n)
{
	int fact;
	int i = n;
	while(i > 0)
		{
			fact = fact + n * i;
			i--;
			 
		}  
		return fact;
}