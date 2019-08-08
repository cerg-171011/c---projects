#include <stdio.h>
char prostoy_massive(msg[]);

int main()
{
	char array[] = "Массив простой";
	prostoy_massive(char array);
}
char prostoy_massive(char msg[])
{
	printf("Ваш массив есть: %s\n", msg);
}