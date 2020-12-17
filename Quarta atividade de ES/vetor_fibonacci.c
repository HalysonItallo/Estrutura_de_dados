#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam_vetor = 0,resultado = 0, i, ultimo_resultado = 1, valor = 0;
	 
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int v[tam_vetor];
	
	if(tam_vetor < 2){
		printf("\nPor favor digite um número válido\n");
	} else {
		for(i = 0; i <= tam_vetor; i++){
			v[i] = valor;
			resultado = valor + ultimo_resultado;
			
			valor = ultimo_resultado;
			ultimo_resultado = resultado;	
		}	
	}
	
	for (i = 0; i < tam_vetor; i++){
		printf("%d\n", v[i]);
	}
	
}