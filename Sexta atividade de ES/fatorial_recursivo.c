#include <stdio.h>
#include <locale.h>
#include "HICP.c"	

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digite um número para calcular o seu fatorial: ");
	scanf("%d", &numero);
	
	printf("Seu fatorial: %d", fatorial_recursivo(numero));
	
	return 0;
}


