#include <stdio.h>
int main()
{
	char line[150];
	int i, j, count;
	printf("Введите строку:\n");
	scanf("%s", line);
	for(i = 0; line[i] != '\0'; i++);
	printf("Длина - %d\n", i);
}