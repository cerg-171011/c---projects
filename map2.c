#include <stdio.h>
void zmey();
void map();



int main()
{
	int i, j, k, g;
	char *A[] = {"#"};
	char *B[] = {"<"};
	char *C[] = {"@"};
	char a[1000][1000];

	/*for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{

			if(j == '\0')
			{
				printf("\n");
			}
			if(i == 5)
			{
				if(j == 5)
				{
					printf("<");
				}
				else if(j == 6)
				{
					printf("#");
				}
				else if(j == 7)
				{
					printf("#");
				}
			}
			
		}
	}*/


for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(j == '\0')
			{
				printf("\n");
			}
			if(i == 0 || i == 9)
			{
				printf("# ");
			}
			if(j == 0)
			{
				printf("#");
			}
			if(j == 9)
			{
				printf("                  #");
			}
			if(i == 5)
			{
				if(j == 5)
					printf(" <");
				if(j == 6 || j == 7)
					printf("#");
			}
		}
	}
}
/*void zmey()
{
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 0; j++)
		{
			if(i == 5)
			{
				if(j == 5)
				{
					printf("%c", B[0]);
				}
				else if(j == 6)
				{
					printf("%c", C[0]);
				}
				else if(j == 7)
				{
					printf("%c", C[0]);
				}
			}
		}
	}
}


void map()
{
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(j == '\0')
			{
				printf("\n");
			}
			if(i == 0 || i == 9)
			{
				printf("#");
			}
			if(j == 0)
			{
				printf("#");
			}
			if(j == 9)
			{
				printf("         #");
			}
		}
	}
}*/	
