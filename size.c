#include <stdio.h>

int main()
{
	char name[10];
	int size;
	printf("Введите размер ноги и имя:\n");
	while(scanf("Размер - %d", &size));
		{
			if ((size > 36) && (size < 42))
				puts("Это группа - A");
			else if (size > 42)
				puts("Это группа - B");
		}
}