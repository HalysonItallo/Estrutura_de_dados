#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int distancia = 0, tanque = 0;
	
	printf("Qual a dist�ncia percorrida: ");
	scanf("%d", &distancia);
	
	printf("Quantidade de litros consumidos para percorrer a dist�ncia indicada: ");
	scanf("%d", &tanque);
	
	if(distancia >= 600){
		printf("\nO carro chegou ao destino");
	} else {
		printf("\nO carro n�o chegou ao destino");
	}
	
	if(tanque >= distancia * 50){
		printf("\nO carro n�o parou por falta de combust�vel");
	} else {
		printf("\nO carro parou por falta de combust�vel");
	}

}


