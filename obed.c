#include <stdio.h>

int main(int argc, int *argv[])
{
	int stoymost = argv[1];
	int amount, mon = 0;
	int count = 0;
	float chay, itog;
	int proc = argv[2];
	printf("Введите кол-во блюд: ");
	while(scanf("%d", &amount) == 1){
		count++;
		mon = mon + amount * stoymost;
		chay = chay + mon * (proc/100);  
		printf("Введите кол-во блюд: ");
	}
	itog = mon + chay;
	printf("%f, %d", itog, count);
	return 0;
}