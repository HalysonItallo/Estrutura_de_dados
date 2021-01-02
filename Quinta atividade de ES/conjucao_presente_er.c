#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct 		
{  
	char frase[50]; 
	char raiz[70];
} palavras;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	palavras palavra = {"\0"};
	memset(&palavra, 0, sizeof(palavras));	
	
	printf("Qual a frase: ");
	gets(palavra.frase);	
		
	int i; 
	for(i = 0; i < strlen(palavra.frase); i++){
		if(palavra.frase[i] == 'e' || palavra.frase[strlen(palavra.frase)-2] == 'E'){
			if(palavra.frase[i+1] == 'r' || palavra.frase[strlen(palavra.frase)-1] == 'R'){
				break;
			}
		}
		palavra.raiz[i] = palavra.frase[i];
	}
	
	
	char *terminacoes[10] = {"o","es","e","emos","eis","em"};
	
	
	for(i = 0; i < 6; i++){
		printf("%s%s\n",palavra.raiz,terminacoes[i]);
	}
	
	
	return 0;
}