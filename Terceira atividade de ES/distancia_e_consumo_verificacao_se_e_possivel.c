#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int distancia = 0, tanque = 0;
	
	printf("Qual a distância percorrida: ");
	scanf("%d", &distancia);
	
	printf("Quantidade de litros consumidos para percorrer a distância indicada: ");
	scanf("%d", &tanque);
	
	if(distancia >= 600){
		printf("\nO carro chegou ao destino");
	} else {
		printf("\nO carro não chegou ao destino");
	}
	
	if(tanque >= distancia * 50){
		printf("\nO carro não parou por falta de combustível");
	} else {
		printf("\nO carro parou por falta de combustível");
	}

}


