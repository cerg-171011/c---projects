#include <stdio.h>
#include <string.h>
int main()
{
	char s0[][80] = 
	{
		"дисфункция",
		"встреча",
		"разнос",
		"бубен"
	};
	int i;
	char s1[20];
	printf("Введите запрос:");
	scanf("%s", s1);
	for (i; i < 5; i++)
		if (strstr(s0[i], s1));
	{
		printf("есть совпадение! - %d, Название - %s", i, s0[i]);
	}
}