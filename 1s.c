#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*struct ocenka{
	int grad;
};
struct discipline{
	char name[20];
	struct ocenka a;
};*/
struct discipline{
	char name[100];
	int grad;
}st[3];

struct student{
	char First_name[100];
	char Last_name[100];
	int age;
	struct discipline st[4];
}student[1];



int main(){

	FILE *in = fopen("students.csv", "w");
	for(int i = 0; i < 2; i++){
			fprintf(stdout, "Имя - , Фамилия - , Возраст - ");
			fscanf(stdin, "%s%s%d", student[i].First_name, student[i].Last_name, &student[i].age);
		for(int j = 0; j < 4; j++){
			fprintf(stdout, "%s Предмет и оценка -  ", student[i].First_name);
			fscanf(stdin, "%s%d\n", student[i].st[j].name, &student[i].st[j].grad);
		}

	}
		for(int i = 0 ; i < 2; i ++){
			fprintf(stdout, "Имя - %s\n", student[i].First_name);
			fprintf(in, "Имя - %s\n", student[i].First_name);
			for(int j = 0; j < 4; j++){
				fprintf(stdout, "%s %d\n", student[i].st[j].name, student[i].st[j].grad);
				fprintf(in, " Предмет - %s, Оценка - %d\n", student[i].st[j].name, student[i].st[j].grad);
			}
		}


	
	//struct student sergey;
	//for()
	/*printf("Имя студента - ");
	scanf("%s", sergey.name);
	printf("Предмет ");
	scanf("%s", sergey.a.name);
	printf("Его оценка - ");
	scanf("%d", &sergey.a.a.grad);
	printf("%s , %s , %d\n", sergey.name, sergey.a.name, sergey.a.a.grad);*/
}