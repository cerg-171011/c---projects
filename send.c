#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//void find(char ADS[NUM_ADS][100]);
//int main()
//{
int NUM_ADS = 8;
char *ADS[] = {
	"Регина: хорошая девочка, любит: спорт, красоту, секс и др\n",
	"Аня: очень красивая девочка любит: внимание, фото, себя\n",
	"Катя любит: деньги и хуй знает что еще\n",
	"Настя любит: Сережу, себя, сиськи и деньги, спорт\n",
	"Ангелина: жипопись, театр, танец живота, друзей\n",
	"Людмила: любит знания, Сережу, психологию\n",
	"Ольга: любит разнообразие, хаос и хз что еще\n"
};
//find(ADS);

char serega(char *s)
{
	return strstr(s, "Сережу") || strstr(s, "Сережа"); 
}

char theatre(char *s)
{
	return strstr(s,"театр");
}

char seks(char *s)
{
	return strstr(s, "секс");
}

void find(char(*match)(char*))//(char ADS[NUM_ADS][100])
{
	int i;
	puts("Результат поиска:\n");
	for(int i = 0; i < NUM_ADS; i++)
	{
		if (strstr(match(ADS[i])))
			{
				printf("%s", ADS[i]);
				break;
			}	
	}
}


int main()
{
	serega(ADS);
	theatre(ADS);
	seks(ADS);
}
