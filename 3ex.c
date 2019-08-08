#include <stdio.h>
#include <math.h>
int main()
{
	int numb;
	int count;
	printf("Введите число:\n");
	scanf("%d\n", &numb);
	while (numb != 0)
		{
			numb /= 10;
			count++;
		}
	printf("Колво цифр - %d, счетчик - %d", numb, count);
	return 0;
}