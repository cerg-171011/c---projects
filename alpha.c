#include <stdio.h>
#include <string.h>
int main(){
	char a[50] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char alpha2[50];
	char *mass_func[23];
	printf("Введите символы: ");
	scanf("%s", alpha2);
	for(int i = 0; alpha2[i] != '\0'; i++){
		for(int j = 0; a[j] != '\0'; j++){
			if(alpha2[i] == a[j]){
				mass_func[i] = &a[j];
				//printf("%c", alpha2[i]);
				//for(int k = i; k <= 23; k++){
					//mass_func[i] = &a[j];
					//printf("%s", *mass_func);
				//} 
			}
		}
	}
	printf("\n");
	for(int i = 0; *mass_func[i] != '\0'; i++){
		if(mass_func[i] - mass_func[i + 1] != -1){
			printf("Неудачный порядок букв!");
			break;
		}
		else if(mass_func[i] - mass_func[i + 1] == -1){
			printf("True - %s\n", alpha2);
		}
	}
}