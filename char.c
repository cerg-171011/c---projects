#include <stdio.h>

int main()
{
	char* name ="ibal vas vsex";
	printf("%s\n", name);
	printf("razmer - %d\n", sizeof(name));
	char name1[] = "ibal vas vsex";
	printf("msg[%s],  razmer[%d]\n", name1, sizeof(name1));
	int* a = 20;
	printf("znachenie[%d], razmer[%d]\n", a, sizeof(a));
}