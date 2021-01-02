#include <stdio.h>
#include <locale.h>
#include "HICP.c"	

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor_dolar, dolar;
	printf("Digite o valor do dólar: ");
	scanf("%f", & valor_dolar);
	
	printf("Digite a sua quantia de dinheiro em dólar: ");
	scanf("%f", & dolar);
	
	printf("O seu valor em Reais: ");
	printf("%.3f", conversao_dolar_para_real(dolar, valor_dolar));
	printf("\n");
	
	return 0;
}

