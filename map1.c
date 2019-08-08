#include <stdio.h>
int main()
{
	float latitude;
	float longitude;
	char info[100];
	int started = 0;
	printf("Введите данные:");
	scanf("%f,%f,(%s = %d)", &latitude, &longitude, info);
	puts("data = [");
	printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
	printf("\n]\n");
}

