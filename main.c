#include <stdio.h>
int numb(int a, int b);
char mes(char let[]);
int count;

int main()
{
int num1 = 1;
int num2 = 2;
char msg[50];
printf("Vvdedite msg:\n");
scanf("%s", msg);
mes(msg);
numb(num1, num2);
printf("znachenie - %d\n", numb(num1, num2));
}

int numb(int a, int b)
{
	a++;
	b++;
	return  a + b;
}

char mes(char let[])
{
	printf("func mes - %s\n", let);
}
