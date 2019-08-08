#include <stdio.h>

typedef struct 
{
	int znachenie[50];
}zapr;

int main()
{
	zapr a = {};
	printf("Введите значение:\n");
	while(scanf("%d", a.znachenie) == 2);
		{
			priintf("%d", a.znachenie);
		}
}


