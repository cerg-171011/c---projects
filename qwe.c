#include <stdio.h>
int sum(int a, int b);
char mes(char pismo[]);
void sum1(int c, int d);

int main()
{
	int num1 = 20;
	int num2 = 30;
	int num3 = 1, num4 = 2;
	char let[50];
	printf("Введите сообщение:\n");
	scanf("%s", let);
	mes(let);
	printf("результат func sum = %d\n", sum(num1, num2));
	sum1(num3, num4);
	
}


int sum(int a, int b)
{
	int v = (a + b) * 2;
	return v;
}

char mes(char pismo[])
{
	printf("%s\n", pismo);
}

void sum1(int c, int d)
{
	printf("результат sum1 - %d\n", c + d);
}