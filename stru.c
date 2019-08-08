#include <stdio.h>

struct distance 
{
	int feet;
	float meter;

} n1, n2, sum;

int main()
{
	printf("Введите информацию1:\n");
	printf("Кол-во шагов:");
	scanf("%d\n", &n1.feet);
	printf("Кол-во метров:");
	scanf("%f\n", &n1.meter);

	printf("Введите информацию2:\n");
	printf("Кол-во шагов:");
	scanf("%d\n", &n2.feet);
	printf("Кол-во метров:");
	scanf("%f\n", &n2.meter);

	printf("Выводим сумму:\n");

	sum.feet = n1.feet + n2.feet;
	sum.meter = n1.meter + n2.meter;
	printf("Сумма шагов = %d\n", sum.feet);
	printf("Сумма метров = %f\n", sum.meter);

}