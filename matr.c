#include <stdio.h>
int main()
{
	int r, c, a[100][100], b[100][100], sum[100][100], i, j;
	printf("Введите количество строк (1-100):\n");
	scanf("%d", &r);
	printf("Введите количество столбов (1-100):\n");
	scanf("%d", &c);
	for(i = 0; i < r; i++)
		for(j = 0; j < c; j++)
		{
			printf("Введите элемент первой матрицы:\n");
			scanf("%d", &a[i][j]);
		}
	for(int i = 0; i < r; i++)
		for(int j = 0; j < c; j++)
		{
			printf("Введите элемент второй матрицы:\n");
			scanf("%d", &b[i][j]);
		}
	for(; i < r; i++)
		for(; j < c; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	for(int i = 0; i < r; i++)
		for(int j = 0; j < c; j++)
		{		
			printf("  %d     ", sum[i][j]);
			if(j==c-1)
			{
				printf("\n\n");
			}
		}
}