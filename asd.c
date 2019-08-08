#include <stdio.h>
int info(food f1);

typedef struct 
{
	char name[10];
	int age;
	int weight;
}human;

typedef struct 
{
	char ingredients[20];
	human h;
}food;

int main()
{
	food f = {"meat", {"Sergey", 22, 90}};
	info(f);
}

int info(food f1)
{
	printf("name - %s, age - %d, weight - %d\n", f1.h.name, f1.h.age, f1.h.weight);
}