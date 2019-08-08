#include <stdio.h>
/*int main()
{
	int fact, n; 
	printf("Введите факториал:\n");
	scanf("%d", &fact);
	if(fact != 0)
		for(int i = 0; i <= fact; i++)
		{
			n = n + fact * i;
		}
		printf("Факториал числа %i = %i\n",fact ,n);
}*/

int main()
{
	int n, fact, i;
	printf("ВВедите факториал числа:\n");
	scanf("%d", &n);
	if(n != 0)
		while( i <= n)
		{
			fact = fact + n * i;
			i++;
		}
		printf("Факториал %d = %d\n", n, fact);
}