#include <stdio.h>
#include <locale.h>
#include "HICP.c"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes, ano;
	printf("Insira o seu dia atual: ");
	scanf("%d", &dia);
	
	printf("Insira o seu m�s atual: ");
	scanf("%d", &mes);
	 
	printf("Insira o seu ano atual: ");
	scanf("%d", &ano);
	 
	 	
	if(data_valida(dia, mes, ano)){
		printf("Data v�lida");
	} else {
		printf("Data inv�lida");
	}
	
	return 0;
}


