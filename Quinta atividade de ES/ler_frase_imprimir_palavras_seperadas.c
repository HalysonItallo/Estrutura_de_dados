#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct 		
{  
	char frase[50]; 
} palavras;

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	palavras palavra;
	
	printf("Qual a frase: ");
	gets(palavra.frase);			
	
	int i; 
	for(i = 0; i < strlen(palavra.frase); i++){
		printf("%c",palavra.frase[i]);
		if(palavra.frase[i]== ' '){
			printf("\n");
		}
	}
}