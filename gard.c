#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 80

char song[6][100] = {
	"Я большен не люблю тебя!",
	"Нет сил бороться за этот город!",
	"Красивая как никогда",
	"Город в котором есть - мы",
	"Кошка по имени счастье",
	"То что нам нужно"
}; 


int main()
{
	FILE *in = fopen("zapr.csv", "r");
	FILE *out = fopen("exit.csv", "w");
	int i;
	char zap[SIZE];
	printf("Введите запрос:");
	while(scanf("%s", zap) == 1)
		for (int i = 0; i < 6; i++)
		{
			(strstr(zap, song[i]));
		}	 
	fprintf(out, "Номер песни - %d, Название - %s\n", i, song[i]);
	{
		fclose(out);
	}
}
