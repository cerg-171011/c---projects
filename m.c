#include <stdio.h>
int main()
{
	float sum, itog;
	int n, i;
	float num[100];
	printf("Введите кол-во цифр:\n");
	scanf("%d", &n);
	while(n > 100 && n <= 0)
	{
		printf("Кол-во цифр долно быть от 0 до 100");
		printf("Введите кол-во цифр:\n");
		scanf("%d", &n);
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d. Введите число:\n", i + 1);
		scanf("%f", &num[i]);
		sum += num[i];
	}
	itog = sum/n;
	printf("Среднее = %f\n", itog);
}

















































