#include <stdio.h>
#include <stdlib.h>

int main ()
{
	FILE *in = fopen("sam.csv", "r");
	FILE *out = fopen("koordinates.csv", "w");
	FILE *out1 = fopen("other.csv", "w");
	FILE *vse = fopen("vse.csv", "w");
	char func[80];
	int longitude;
	int latitude;
	fscanf(in, "%79[^\n]", func);
	if ((longitude > 180) && (longitude <260))
		{
			fprintf(out, "%s\n", func);
		} 
	else if (latitude > 45)
		{
			fprintf(out1, "%s\n", func);
		}	
	else
		{
			fprintf(stderr, "%s\n", func);
		}
	fprintf(vse, "%s\n", func);
	fclose (out);
	fclose (out1);
	fclose (vse);
}