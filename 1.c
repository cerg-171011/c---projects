#include <stdio.h>
#include <string.h>

char mus[][100] = {
	"Я люблю тебя Сюзанна!",
	"Мой город живет без страха",
};

int main ()
{
	int i;
	char zapros[100];
	printf("Введите запрос:\n");
	scanf("%s", zapros);
		for (i = 0; i < strlen(mus); i++);
		if (strstr(mus[i], zapros))
		{
			printf("Номер песни - %d, Название - %s",i ,mus[i]);
		}
}