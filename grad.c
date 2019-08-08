#include <stdio.h>
#include <string.h>

struct spisok
{
	char name[30];
	int age;
	int group;
}a[10];

int main()
{
	int i;

	
	for (int i = 1; i <= 10; i++)
	{
		printf("Имя(%i), Возраст, Группа:", i);
		while(1)
		{
		scanf("%s %d %d", a[i].name, &a[i].age, &a[i].group);
		if(strstr(a[i].name, "anton"))
	{
		printf("Совпадение = Имя - %s, Возраст - %d, Группа - %d", a[i].name, a[i].age, a[i].group);
	}
		break;
		}
	}
	
}