#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int NUM_ADS = 7;
char *ADS[] = {	
	"Регина: хорошая девочка, любит: спорт, красоту, секс и др\n",
	"Аня: очень красивая девочка любит: внимание, фото, себя\n",
	"Катя любит: деньги и хуй знает что еще\n",
	"Настя любит: Сережу, себя, сиськи и деньги, спорт\n",
	"Ангелина: жипопись, театр, танец живота, друзей\n",
	"Людмила: любит знания, Сережу, психологию\n",
	"Ольга: любит разнообразие, хаос и хз что еще\n"};

int serega(char *s)
{
	return strstr(s, "Сережу") || strstr(s, "сиськи"); 
}

int theatre(char *s)
{
	return strstr(s,"театр") || strstr(s, "Сережа");
}

int seks(char *s)
{
	return strstr(s, "секс") || strstr(s, "Сережа");
}


void find(int(*match)(char*))
{
	int i;
	puts("Результат поиска:\n");
	for(int i = 0; i < NUM_ADS; i++)
	{	
		if(match(ADS[i]))
		{
			printf("%s\n", ADS[i] );
		}
	}	
}

int main()
{
	find(serega);
	find(theatre);
	find(seks);
}