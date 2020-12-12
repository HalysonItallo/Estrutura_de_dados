#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int limite_n = 0, i, resultado = 0;
	
	printf("Digite o limite dos números: ");
	scanf("%d", &limite_n);
	
	if(limite_n <= 0 ){
		system("pause");
	}
	
	for(i = 1; i <= limite_n; i++){
		resultado += i;
	}
	printf("Resultado da somatória: %d", resultado);
}
