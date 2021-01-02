#include <stdio.h>
#include <locale.h>
#include "HICP.c"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	 
	printf("Insira o ano para saber se é  bissexto: ");
	scanf("%d", &ano);
	 
	eh_bissexto(ano) ? printf("O ano é bissexto") : printf("O ano não é bissexto");	
	return 0;
}


