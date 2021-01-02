#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct 		
{  
	char nome_completo[50]; 
	char *sobrenome;
	char inicias[50];
} palavras;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	palavras n;
	memset(&n, 0, sizeof(palavras));	
	
	printf("Qual a frase: ");
	gets(n.nome_completo);		
	
	
	int i, index = 0;
	n.inicias[index++] = n.nome_completo[0];
	for(i = 0; i < sizeof(n.nome_completo)/sizeof(char); i++){
		if(n.nome_completo[i] == ' '){
			if( 65 <= (int)n.nome_completo[i+1] && (int)n.nome_completo[i+1] <= 90){
				n.inicias[index++] = n.nome_completo[i+1];
			}
		}
	}
	
	char *ptr = strtok(n.nome_completo, " ");

	while (ptr != NULL)
	{
		n.sobrenome = ptr;
		ptr = strtok(NULL, " ");
	}
	
	
	printf("Por %s,", n.sobrenome);
	for(i = 0; i < strlen(n.inicias) - 1;i++ ){
		printf(" %c.", n.inicias[i]);
	}
	return 0;
}