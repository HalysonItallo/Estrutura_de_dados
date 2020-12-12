#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, mais_gordo = 0, mais_magro =  1000000;	
	int identificacao = 0, identificacao_magro = 0, identificacao_gordo = 0;
	
	
	while(1){
		printf("Qual a identificação do boi: ");
		scanf("%d", &identificacao);
		
		if(identificacao == 0){
			break;
		}
		
		printf("Qual o peso do boi: ");
		scanf("%f", &peso);
		
		
		if(peso > mais_gordo){
			mais_gordo = peso;
			identificacao_gordo = identificacao;
		} 
		if(peso < mais_magro) {
			mais_magro = peso;
			identificacao_magro = identificacao;
		}	
		
		printf("\n");
	}
	
	printf("\nIdentificação: %d -> mais gordo: %.2f", identificacao_gordo, mais_gordo);
	printf("\nIdentificação: %d -> mais magro: %.2f", identificacao_magro, mais_magro);

}


