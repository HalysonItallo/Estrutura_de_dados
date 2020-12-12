#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero = 0, resultado = 0, i, ultimo_resultado = 1;
	
	
	
	printf("Digite o núemero que representará o tamanho da sequência: ");
	scanf("%d", &numero);
	
	
	for(i = 1; i < numero+1; i++){
		if(i == 1){
			resultado = 1;
		} else{
			resultado = ultimo_resultado + i;
			ultimo_resultado = resultado;
		}
		printf("Sua sequência: ");
		printf("%d\n", resultado);
	}
}

