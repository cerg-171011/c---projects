#include <stdio.h>
int main()
{
	int age, weight;
	char name [50];
	printf("what is yourТ name?");
	scanf("%s", name);
	printf("Skolko vam age");
	scanf("%d", &age);
	printf("Kakoy vash weight?");
	scanf("%d", &weight);
	printf("Vashe name - %s, Vash age - %d, Vash weight - %d", name, age, weight);
}