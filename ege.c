#include <stdio.h>
#define N 10
int main()
{
	int i, j, k;
	int num[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for(i = 0; i <= N; i++)
		for(j = 0; j <= N; j++)
		{
			if(num[i] == num[j])
				continue;  
			if((num[i] * num[j]) % 26 == 0)
			{
				k++;
			} 
		}
}