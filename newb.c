#include <stdio.h>
int func_fun(char msg1[]);
int numbers(int a, int b);

int main()
{
	int a = 10, b = 20;
	char msg[50] = "Я спокоен как удав";
	int msg_n[50] = {1,2,3,4};
	int c;
	func_fun(msg);
	printf("summa - %d\n", numbers(a, b));

}

int func_fun(char msg1[])
{
	printf("%s\n", msg1);
}

int numbers(int a, int b)
{
	return a + b;
}


