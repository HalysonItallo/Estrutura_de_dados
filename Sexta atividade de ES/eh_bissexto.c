#include <stdio.h>
#include <locale.h>
#include "HICP.c"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	 
	printf("Insira o ano para saber se �  bissexto: ");
	scanf("%d", &ano);
	 
	eh_bissexto(ano) ? printf("O ano � bissexto") : printf("O ano n�o � bissexto");	
	return 0;
}


