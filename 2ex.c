#include <stdio.h>
int main()
{
	int downLet;
	int highLet
	char c;
	downLet = (c == 'а'|| c == 'е'|| c == 'и'|| c == 'о'|| c == 'у'|| c == 'ы'|| c == 'э'|| c == 'ю'|| c == 'я');
	highLet = (c == 'А'|| c == 'Е'|| c == 'И'|| c == 'О'|| c == 'У'|| c == 'Ы'|| c == 'Э'|| c == 'Ю'|| c == 'Я');
	printf("Введите букву:\n");
	scanf("%c\n", &c);
	if(downLet || highLet)
		printf("Введенный символ - гласная");
	else
		printf("Введенный символ - согласная");
}	