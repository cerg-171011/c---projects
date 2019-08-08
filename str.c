#include <stdio.h>
#include <string.h>
int main()
{
	char func[50] = "Я люблю тебя Москва!";
	char zapros[50];
	printf("Введите запрос:");
	scanf("%s", zapros);
	if (strstr(func[50], zapros[50]));
	{
		printf("Я нашел эту песню - %s", func);	
	}	
}