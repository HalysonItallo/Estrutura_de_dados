#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero = 0, resultado = 0, i, ultimo_resultado = 1, valor = 0;
	
	
	
	printf("Digite o n�emero que representar� o tamanho da sequ�ncia: ");
	scanf("%d", &numero);
	
	if(numero < 2){
		printf("\nPor favor digite um n�mero v�lido\n");
	} else {
		for(i = 0; i <= numero; i++){
			printf("%d", valor);
			resultado = valor + ultimo_resultado;
			
			valor = ultimo_resultado;
			ultimo_resultado = resultado;	
		}	
	}
	
}

