#include <stdio.h>
int main()
{
	int i, n, numb, nTerm, a = 0, b = 1;
	printf("Введите кол-во цифр в последовательности:\n");
	scanf("%d", &n);
		for(i = 0; i <= n; i++)
		{
		if(i == 0)
			printf(" %d, ", a);
			continue;
		if(i == 1)
			printf("%d", b);
			continue;
		nTerm = a + b;
		a = b;
		b = nTerm;
		printf("%d", nTerm);
		}

}