#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float quant_latao, zinco, cobre;
		
	printf("Digite a quantidade de latão que você quer em Kg: ");
	scanf("%f", &quant_latao);
	
	cobre = (quant_latao * 70) / 100;
	zinco = (quant_latao * 30) / 100; 
	
	printf("Quantidade de cobre em Kg: ");
	printf("%.3f", cobre);
	printf("\n");
	
	printf("Quantidade de zinco em Kg: ");
	printf("%.3f", zinco);
	printf("\n");
	
	system("PAUSE");
}