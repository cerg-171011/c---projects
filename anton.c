#include <stdio.h>
int sumMatr(int mat1[][100], int mat2[][100], int r1, int r2, int c1, int c2);

int main()
{
	int mat1[100][100], mat2[100][100], sum[100][100], r1, c1, r2, c2;
	printf("Введите кол-во строк и рядов 1-ой матрицы:\n");
	scanf("%d%d", &r1, &c1);
	printf("Введите кол-во строк и рядов 2-ой матрицы:\n");
	scanf("%d%d", &r2, &c2);
			
	for(int i = 0; i < r1; i++)
		for(int j = 0; j < c1; j++)
				{
					printf("Введите элемент a%d%d:\n", i + 1, j + 1);
					scanf("%d", &mat1[i][j]);  
				}
	for(int i = 0; i < r2; i++)
		for(int j = 0; j < c2; j++)
				{
					printf("Введите элемент b%d%d:\n", i + 1, j + 1);
					scanf("%d", &mat2[i][j]);  
				}

	sumMatr(mat1, mat2, c1, c2, r1, r2);
}

int sumMatr(int mat1[][100], int mat2[][100], int r1, int r2, int c1, int c2)
	{
		int sum[100][100];
		for (int i = 0; i < r1; i++)
			for(int j = 0; j < c2; j++)
			{
				sum[i][j] = mat1[i][j] + mat2[i][j];
			}
		for (int i = 0; i < r1 && i < r2; i++)
			for(int j = 0; j < c1 && j < c2; j++)
				{
				printf("%d    ", sum[i][j]);
				if(j==c1-1)
					printf("\n\n");
				}
	} 