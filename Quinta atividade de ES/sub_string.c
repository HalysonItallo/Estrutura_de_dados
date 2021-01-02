#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct 		
{  
	char frase[50]; 
	char sub_string[50];
	char frase_resultado[50];
	int inicio;
	int fim;
} palavras;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	palavras f;
	memset(&f, 0, sizeof(palavras));	
	
	printf("Digite a sua frase: ");
	gets(f.frase);		
	
	printf("Digite o trecho para substituir: ");
	gets(f.sub_string);
	
	printf("Digite o caracter de inicio (contando com os espaços e começando do 0): ");
	scanf("%i", &f.inicio);
	
	printf("Digite o caracter de fim (contando com os espaços e começando do 0): ");
	scanf("%i", &f.fim);
		
	int i, index = 0, index_subtring = 0;
	
	for(i = 0; i < strlen(f.frase); i++){
 		if(f.inicio <= i && i <= f.fim){
			f.frase_resultado[index++] = f.sub_string[index_subtring++];  
		} else{
			f.frase_resultado[index++] = f.frase[i];	 
 	 }
	}		
	
	printf("%s", f.frase_resultado);

	return 0;
}