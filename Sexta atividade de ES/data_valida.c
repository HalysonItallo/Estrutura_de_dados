#include <stdio.h>
#include <locale.h>
#include "HICP.c"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes, ano;
	printf("Insira o seu dia atual: ");
	scanf("%d", &dia);
	
	printf("Insira o seu mês atual: ");
	scanf("%d", &mes);
	 
	printf("Insira o seu ano atual: ");
	scanf("%d", &ano);
	 
	 	
	if(data_valida(dia, mes, ano)){
		printf("Data válida");
	} else {
		printf("Data inválida");
	}
	
	return 0;
}


