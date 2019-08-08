#include <stdio.h>
#include <string.h>

 int main()
 {
 	char m_name[] = "Petrov";
 	for(int i = 0; i < strlen(m_name); i++)
 	{
 		if(m_name[0] == 'P')
 		{
 			m_name[0] == 'p';
 		}
 		printf("%c\n", m_name[0]);
 		m_name[0]++;
 	}
 	return 0;
 }