#include <stdio.h>

int ab1(int e1)
{
	printf("func ab1 =  %d\n", e1);
	e1 = 100;
	return e1;

}


int main()
{
	int a = 19, b = 5, c, d;
	printf("Введите значение:\n");
	scanf("%d", &d);
	c = d % 2 == 0 ? printf("Четное\n") : printf("Нечетное\n");
	int *e = &e;
	int e = (a + b == 15) ? printf("%d", ab1(e)) : printf("Неправильное число");
}