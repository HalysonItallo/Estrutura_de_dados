#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main (){
	setlocale(LC_ALL, "Portuguese");
	int qtd_container = 0, i;
	float peso_container = 0, peso_carga = 0;
	
	printf("*** Programa de permissão de Voo *** \n");
	
	printf("\nColeta de informações carga \n");
	
	printf("Digite a quantidade de containers: ");
	scanf("%d", &qtd_container);

	for(i= 0; i < qtd_container; i++){
		printf("Digite o peso de cada container em Kg: ");
		scanf("%f", &peso_container)	;
		peso_carga += peso_container;
	}
	
/*---------------------------------------------------*/	
	printf("\nColeta de informações passageiros\n");
	
	int numero_bilhete, qtd_bagagens = 0, total_bagagens = 0, qtd_passageiros = 0;
	
	while(1){

		printf("Qual é o seu número do bilhete: ");
		scanf("%d", &numero_bilhete);
		
		if(numero_bilhete==0){
			break;
		}
		
		printf("Quantas bagagens você está carregando: ");
		scanf("%d", &qtd_bagagens);
		total_bagagens += qtd_bagagens;

		qtd_passageiros++;	
	}
	
/*---------------------------------------------------*/	

	float qtd_total_volume_bagagem = total_bagagens * 10;
	float peso_passageiro = (qtd_passageiros * 70) + qtd_total_volume_bagagem;
	
	
	printf("\n Mostrar informações de Voo\n");
	
	printf("Quantidade de passageiros: %d", qtd_passageiros);
	
	printf("\nA quantidade total de volume de bagagem: %.2fKg", qtd_total_volume_bagagem);
	
	printf("\nO peso do passageiro: %.2fKg", peso_passageiro);
	
	printf("\nO peso da carga: %.2fKg", peso_carga);
	
	if(500000 - (peso_carga + peso_passageiro) < 0){
		printf("\nA quantidade possível de combustível: 0.0L");
		printf("\nNão pode decolar");
	} else {
		float peso_combustivel  = 500000 - (peso_carga + peso_passageiro);
		float qtd_combustivel = peso_combustivel / 1.5;
		if(qtd_combustivel >= 10000){
			printf("\nA quantidade possível de combustível: %.2fL", qtd_combustivel);
			printf("\nPode decolar");
		}
	}
	
	
	
		
	
	
}