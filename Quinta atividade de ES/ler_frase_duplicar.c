	#include <stdio.h>
	#include <locale.h>
	#include <stdlib.h>
	#include <string.h>
	
	typedef struct 		
	{  
		char frase[50];
		char nova_frase[100]; 
	} palavras;
	
	void main(){
		setlocale(LC_ALL, "Portuguese");
		
		palavras palavra;
		
		printf("Qual a frase: ");
		fgets(palavra.frase, 50, stdin);			
		
		
		int i, index = 0; 
		for(i = 0; i < strlen(palavra.frase); i++){
			palavra.nova_frase[index++] = palavra.frase[i];	
		  palavra.nova_frase[index++] = palavra.frase[i];	
		}
		printf(palavra.nova_frase);
	}