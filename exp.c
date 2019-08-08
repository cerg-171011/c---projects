#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
FILE *in = fopen("прога.csv", "r");
FILE *file1 = fopen(argv[2], "w");
FILE *file2 = fopen(argv[4], "w");
FILE *file3 = fopen(argv[5], "w");
FILE *file4 = fopen("file_err.csv", "w");
char line[180];
if(argc != 6){
		fprintf(file4, "Ошибка передачи аргументов - %d\n", argc);
	}
	while(fscanf(in, "%179[^\n]\n", line) == 1){
		if(strstr(line, argv[1])){
			fprintf(file1, "%s\n", line);
		}
		else if(strstr(line, argv[3])){
			fprintf(file2, "%s\n", line);
		}
		else{
			fprintf(file3, "%s\n", line);
		}
	}
	fclose(file1);
	fclose(file2);
	fclose(file3);
	fclose(file4);

}