#include <stdio.h>
#include <string.h>
/*int main()
{
	int choose;
	printf("Какой фильм хотите посмотреть?\n");
	printf("1 - Один дома\n");
	printf("2 - Лицо со шрамом\n");
	printf("3 - Крестный отец\n");
	printf("4 - Мстители: Гражданская война\n");
	printf("Выберите фильм:\n");
	fscanf(stdin, "%d", &choose);
	switch(choose)
	{
		case 1: printf("Вы выбрали фильм ""Один дома"" - приятного просмотра!!\n");
		break;	
		case 2: printf("Вы выбрали фильм ""Лицо со шрамом"" - приятного просмотра!!\n");
		break;
		case 3: printf("Вы выбрали фильм ""Крестный отец"" - приятного просмотра!!\n");
		break;
		case 4: printf("Вы выбрали фильм ""Мстители: Гражданская война"" - приятного просмотра!!\n");
		break;
		default: printf("Такого фильма нет\n");
		break;
	}	 

}*/
int main()
{
	char *film[] = {
		"Один дома",
		"Лицо со шрамом",
		"Крестный отец",
		"Мстители: Гражданская война"};
	int choose;
	printf("Какой фильм хотите посмотреть?\n");
	printf("1 - Один дома\n");
	printf("2 - Лицо со шрамом\n");
	printf("3 - Крестный отец\n");
	printf("4 - Мстители: Гражданская война\n");
	printf("Выберите фильм:\n");
	fscanf(stdin, "%d", &choose);
	for (int i = 0; i < 5; i++)
	{
		if (strstr(film[i], choose))
			printf("%s", film[i]);
	} 
}