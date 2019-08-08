#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, sum, n;

	printf("Введите число\n");
	scanf("%d\n", &n);
	i = 1;
	n++;
	while ((i < n) == 1)
	{
		sum += i;
		i++; 
	}
	
	printf("sum = %i\n", sum);
}