#include <stdio.h>

int main()
{
	float latitude;
	float longitude;
	char info[80];
	int started = 0;
	puts("data = [");
	while (scanf("%d, %d, %79[\n]", &latitude, &longitude, info) == 3)
	{
	if (started)
	printf(",\n");
	else
	started = 1;
	printf("{latitude: %d, longitude: %d, info: '%s'}",latitude, longitude, info);
	}
	puts("\n]");
	return 0;

}