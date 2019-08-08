#include <stdio.h>
int main()
{
	int i, n;
	for(i = 1; i <= 9; i++)
		for(int j = 1; j <= 9; j++)
			printf("%2d", i * j);
		printf("\n");
}