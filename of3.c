#include <stdio.h>

short count = 0;
float total;
float of_per = 1.06;


float chayviy(float f)
{
	total = total + (f * of_per);
	count = count + 1;
	return total;
}

int main()
{
	
	float line;
	printf("Введите цену блюда:\n");
	while(scanf("%f\n", &line) == 1)
		{
			printf("Сейчас на счету - %.2f, Блюдо - %d\n", chayviy(line), count + 1);
			printf("Цена блюда:\n");
		}
	printf("Количество блюд - %d\n", count);
	printf("Итоговый счет - %.2f\n", total);
	printf("\n");
}

