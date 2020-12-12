#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero = 0, resultado = 0, i, ultimo_resultado = 1, valor = 0;
	
	
	
	printf("Digite o núemero que representará o tamanho da sequência: ");
	scanf("%d", &numero);
	
	if(numero < 2){
		printf("\nPor favor digite um número válido\n");
	} else {
		for(i = 0; i <= numero; i++){
			printf("%d", valor);
			resultado = valor + ultimo_resultado;
			
			valor = ultimo_resultado;
			ultimo_resultado = resultado;	
		}	
	}
	
}

