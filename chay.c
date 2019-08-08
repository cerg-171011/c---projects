#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct chay{
	char name_of_product	;
	int cena;
	int kolichestvo;
	int prodano;
	int vydano;
	int ostatok_na_konec;
};

struct train{
	char name_provodnik;
	int numb_train;
	struct chay a;
};

struct total{
	int total;
	int total_chay;
	int total_prod_tovary;
	int neprod_tovary;
	struct train a;
}s[60];

int main(){
	int total;
	while(1){
	for(int i = 0; i < 1; i++){
		printf("Введите номер вагона и фамилию проводника: ");
		scanf("%d %s", &s[i].a.numb_train, &s[i].a.name_provodnik);
		printf("Введите название продукта: ");
		scanf("%s\n", &s[i].a.a.name_of_product);
		printf("%s - его стоймость = ", &s[i].a.a.name_of_product);
		scanf("%d\n", &s[i].a.a.cena);
		printf("%s - кол-во проданного = ", &s[i].a.a.name_of_product);
		scanf("%d\n", &s[i].a.a.prodano);
		printf("%s - кол-во выданного = ", &s[i].a.a.name_of_product);
		scanf("%d\n\n", &s[i].a.a.vydano);

		total = s[i].a.a.cena * s[i].a.a.prodano;
		s[i].a.a.ostatok_na_konec = s[i].a.a.vydano - s[i].a.a.prodano;
		printf("Деньги - %d\n", total); 
	}

	for(int i = 0; i < 2; i++)
	printf("\n");
	for(int i = 0; i < 1; i++){
		printf("Вагон №%d, проводник - %s\n", s[i].a.numb_train, &s[i].a.name_provodnik);
	}
	printf("Вам должны - %d\n", total);
}	
}
