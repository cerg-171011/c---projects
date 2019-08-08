#include <stdio.h>
int main()
{
	int numb[7];
	int temp;
	for(int i = 0; i < 8; i++){
	printf("%i)
		scanf("%")
	}

	for(int i = 0; i < 8; i++)
	{
		for(int j = i + 1; j < 8; j++)
		{
			if(numb[i] < numb[j])
			{
				temp = numb[i];
				numb[i] = numb[j];
				numb[j] = temp; 
			}
			else if(numb[i] == numb[j])
			{
				temp = numb[i];
				numb[i] = numb[j];
				numb[j] = temp; 
			}
		}
	}
	printf("Отсортированный массив - ");
	for(int h = 0; h < 8; h++)
	{
		printf("%d", numb[h]);
	}
	printf("\n");
}