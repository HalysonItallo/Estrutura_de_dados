#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float value_dolar, dolar;
	printf("Digite o valor do dólar: ");
	scanf("%f", & value_dolar);
	printf("Digite a sua quantia de dinheiro em dólar: ");
	scanf("%f", & dolar);
	printf("O seu valor em Reais: ");
	printf("%.3f", dolar * value_dolar);
	printf("\n");
}
