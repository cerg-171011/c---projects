#include <stdio.h>
char funct(char mes[]);
char summa[50];
int count;
int abr, bar;

int sum(int a, int b)
{
	a++;
	b++;
	count++;
	return a, b;
}

int main()
{
	char func[50] = {"Я функция string"};
	funct(func);
	printf("Введите значение:\n");
	while(scanf("%i, %i", &abr, &bar) == 3);
	{
		printf("Увеличенное значение - %i, %i\n", sum(abr, bar));
		printf("Введите значение:\n");
	}
	printf("Итого - %d\n", count);
	
}

char funct(char mes[])
{	
	printf("Func mes: %s\n", mes);
}