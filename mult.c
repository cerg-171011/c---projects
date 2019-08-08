#include <stdio.h>
int c;
int multiply(int a, char b)
{
	c = a*b;
	return c;
}

int main()
{
	int a = 1;
	char b =20;
	multiply(a,b);
	printf("a*b = %d", c);
}


