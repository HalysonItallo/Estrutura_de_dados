#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero = 0, resultado = 0, contador = 1;
	
	printf("Digite um número que se aproxima de um quadrado perfeito: ");
	scanf("%d", &numero);
	
	while(1){
		if(resultado <= numero){
			resultado = contador * contador;
			contador++;
		} else {
				printf("%d", (contador - 2) * (contador - 2));
				break;
		}
	}
}

