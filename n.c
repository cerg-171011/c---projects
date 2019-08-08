#include <stdio.h>
int main()
{
	int numb[10] = {5,8,2,1,8,9,6,4};
	int temp;
	
	for (int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			if(numb[0] < numb[i])
			{
				temp = numb[0]; 
				numb[0] = numb[i];
				numb[i] = temp;
			}
		}
			
	}
	printf("%d", numb);
}