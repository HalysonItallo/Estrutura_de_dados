#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	char letra;
	printf("Insira a sua letra: ");
	scanf("%c", &letra);
	 
	
	if(
		letra == 'a' || 
		letra == 'e' || 
		letra == 'i' || 
		letra == 'o' || 
		letra == 'u' || 
		letra == 'A' || 
		letra == 'E' || 
		letra == 'I' || 
		letra == 'O' || 
		letra == 'U'
	){
		printf("É vogal");
	} else{
		printf("É Consoante");
	}
}