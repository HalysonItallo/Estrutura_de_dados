#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main (){
	setlocale(LC_ALL, "Portuguese");
	int numero = 0, bin[8], i, numero2 = 0;
	printf("Digite o seu núemero decimal: ");
	scanf("%d", &numero);
	numero2 = numero;
	
	for(i = 7; i >= 0; i--){
		if(numero % 2 == 0){
			bin[i] = 0;
		} else {
			bin[i] = 1;
		}
		numero = numero / 2;
	} 
	printf("Binário -> ");
	for(i = 0; i < 8; i++){
		printf("%d", bin[i]);
	}
	
	printf("\nHexadecimal -> %2X", numero2);
		
}