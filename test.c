/*#include <stdio.h>
#include <string.h>
int main(){
	char name[] = "ee";
	for(int i = 0; i < strlen(name); i++){
		if(name[i] == name[i + 1]){
			printf("match\n");
			break;
		}
		else{
			printf("dont match");
		}
	}
	int mem[2];
	int num = 9, count;
	int m_num[5] = {1,2,3,4,6};
	for(int i = 0; i < 5; i++){
		if(num == m_num[i]){
			count++;
			printf("[%d] - %d\n", i + 1, count);
			printf("%d\n", 5 - 1);
		}
		else if(count == 0 && i == 4){
			printf("%d\n", num);
		}
		else if(num == m_num[i]){
			printf("match!\n");
			continue;
		}
	}
	for(int i = 0; i < 5; i++){
		printf("%d", mem[i]);
	}
	char name[0];
	int count = 1;
	int i;
	for(int i = 0; i < 5; i++){
		name[0] = count;
	}
	for(int i = 0; i < 5; i++){
		printf("%d", name[0]);
	}
}*/
#include <stdio.h>
#include <time.h>

int main(void)
{
  const time_t timer = time(NULL);
  printf("%s\n", ctime(&timer));
  return 0;
}
