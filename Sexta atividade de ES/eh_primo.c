#include <stdio.h>
#include <locale.h>
#include "HICP.c"

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero = 0;
	
	printf("Digite o número para saber se é primo: ");
	scanf("%d", &numero);

 if (eh_primo(numero))
    printf("%d é um número primo\n", numero);
 else
    printf("%d não é um número primo\n", numero);
		
	
	return 0;
}


