#include <stdio.h>

typedef struct 
{
	char *name;
	char *type;
	int age;
	int weigh;
}food;

typedef struct 
{
	char *food;
	int weigh_food;
	food f;
}fish;

int happy_birthsday(fish *a)
{
	a->f.age = a->f.age + 1;
	printf("congrations - %s - %d years\n", a->f.name, a->f.age);
}

int main()
{
	fish kira = {"meat", 1, {"Kira", "fish", 5, 100}};
	happy_birthsday(&kira);
	printf("%s - прожила %d years", kira.f.name, kira.f.age);
}
