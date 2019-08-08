#include <stdio.h>
int main()
{
	int i, numb, sum;
	printf("Введите число:");
	scanf("%d\n", &numb);
	if(numb != 0)
	{
		for(int i = 1; i <=numb; i++)
			sum +=i;
		printf("sum = %d", sum);
	}
	else
		printf("Вы ввели 0");
}