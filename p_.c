#include <stdio.h>
//int func_mass(int *p_mass);
//char func_mass1(int *p_mass1);
int main()
{
	int i;
	int numbers[60] = {1,2,3,4,5};
	int *p_a1 = &numbers[0];
	int *p_b2 = &numbers[1];
	int *p_c3 = &numbers[2];
	int *p_d4 = &numbers[3];
	int *p_e5 = &numbers[4];
	int *p_numbers = {p_a1, p_b2, p_c3, p_d4, p_e5};
	for (int i = 0; i < 6; i++)
	{
		printf("%d", *p_numbers[i]);
	}
}

	/*int a1 = 1;
	int b2 = 2;
	int c3 = 3;
	int d4 = 4;
	int e5 = 5;
	int *p_a1 = &a1;
	int *p_b2= &b2;
	int *p_c3 = &c3;
	int *p_d4 = &d4;
	int *p_e5 = &e5;
	int *p_mass[7] = {int *p_a1, int *p_b2, int *p_c3, int *p_d4, int *p_e5}; */ 

	//char *p_mass1[3] = {"Я изучаю", "язык", "Си!"}; 
	//func_mass(*p_mass);
	//func_mass1(*p_mass1);
//}

/*int func_mass(int *p_mass)
{
	for (int i = 0; i < 8; i++)
	{
		printf("%d", *p_mass[i]);
	}
}*/

//char func_mass1(char *p_mass1)
//{
//	printf("%c", *p_mass1);
//}

