#include <stdio.h>
#define SIZE 6
int main()
{
	int mas_numb[SIZE];
	//int copy_numb[SIZE];
	int test_numb;
	printf("Заполните массив:\n");
	for(int i = 0; i < 6; i++)
	{
		i++;
		printf("Элемент %d - ", i);
		scanf("%d", &mas_numb[i]);
		i--;
	}
	for(int i = 0; i < SIZE/2; i++)
	{
		test_numb = mas_numb[i];
		mas_numb[i] = mas_numb[SIZE - i];
		mas_numb[SIZE - i] = test_numb;
	}
	for(int j = 0; j < SIZE; j++)
	{
		printf("%d", mas_numb[j]);
	}
	printf("\n");
}


