#include <stdio.h>
int v;
char let(char msg[]);

int ab(int a, int b)
{
	a = a + 1;
	b = b + 1;
	v = a + b;
	return v;
}

int main()
{
	char symb[30] = {"Я гора Роджан!"};
	int a = 20;
	int b = 30;
	go(v);
	let(symb[]); 
	printf("%i", v);
}

char let(char msg[])
{
	printf("%s\n", msg);
}




