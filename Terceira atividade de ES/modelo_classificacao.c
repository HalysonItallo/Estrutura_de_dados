#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[100], nome_mais_baixa[100], nome_mais_alta[100], nome_mais_gorda[100], nome_mais_magra[100];
	float peso, altura, mais_baixa = 1000000, mais_alta = 0, mais_gorda = 0, mais_magra =  1000000;
	
	
	
	while(1){
		printf("Qual o seu nome: ");
		scanf("%s", nome);
		
		if(strcmp(nome, "FIM") == 0){
			break;
		}
		
		printf("Qual a sua altura: ");
		scanf("%f", &altura);
		
		printf("Qual a sua peso: ");
		scanf("%f", &peso);
		
		if(altura > mais_alta){
			mais_alta = altura;
			strcpy(nome_mais_alta, nome);
		} 
		if(altura < mais_baixa) {
			mais_baixa =  altura;
			strcpy(nome_mais_baixa, nome);
		}
		
		if(peso > mais_gorda){
			mais_gorda = peso;
			strcpy(nome_mais_gorda, nome);
		} 
		if(peso < mais_magra) {
			mais_magra =  peso;
			strcpy(nome_mais_magra, nome);
		}	
		
		printf("\n");
	}
	
	printf("\nNome: %s -> mais alta: %.2f", nome_mais_alta, mais_alta);
	printf("\nNome: %s -> mais baixa: %.2f", nome_mais_baixa, mais_baixa);
	printf("\nNome: %s -> mais gorda: %.2f", nome_mais_gorda, mais_gorda);
	printf("\nNome: %s -> mais magra: %.2f", nome_mais_magra, mais_magra);

}


