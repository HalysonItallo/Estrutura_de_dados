#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct 		
{  
	char nome_completo[50]; 
	char *sobrenome;
	char *nome;
} palavras;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	palavras n;
	
	memset(&n, 0, sizeof(palavras));	
	
	printf("Qual a frase: ");
	gets(n.nome_completo);		
	
	char *ptr = strtok(n.nome_completo, " ");
	int index = 0;
	while (ptr != NULL)
	{
		if(index == 0){
			n.nome = ptr;
			index++;
		}
		n.sobrenome = ptr;
		ptr = strtok(NULL, " ");
	}
	
	printf("%s/%s", n.sobrenome, n.nome);
	return 0;
}