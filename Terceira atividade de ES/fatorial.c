#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, i, resultado = 1;
	printf("Digite um número para calcular o seu fatorial: ");
	scanf("%d", &numero);
	
	for(i = 1; i <= numero; i++){
		resultado = resultado * i;
	}
	printf("Seu fatorial: %d", resultado);
}
