#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	float investido = 0, taxa_juros_mensal = 0, saldo = 0;
	int i = 1, continuar = 0;

	printf("Quanto ser� investido por m�s: ");
	scanf("%f", &investido);
		
	printf("Quanto ser� a taxa mensal: ");
	scanf("%f", &taxa_juros_mensal);
	
	for(i = 0; i <= 24;i++){
		if(i == 13){
			printf("%.2f", saldo);
			
			printf("\nVoc� deseja continuar por mais 12 meses\n1 - Sim \n2 - N�o\n>>> ");
			scanf("%d", &continuar);
			
			if(continuar == 2){
				break;
			}
		}
		saldo = investido * pow(1 + taxa_juros_mensal/100,12);
	}
	

}


