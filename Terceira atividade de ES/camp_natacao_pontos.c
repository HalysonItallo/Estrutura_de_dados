#include <stdio.h>
#include <locale.h>
#include <string.h>


void main()
{
	setlocale(LC_ALL, "Portuguese");
	int qtd_jogadores, 
		 	num_prova, 
			i, 
			tempo, 
			pontos_a = 0, 
			pontos_b = 0, 
			classificacao;
	char nome[100], clube[0];
	
	
	while(1){
		printf("Insira o número da prova: ");
		scanf("%d", &num_prova);
	
		printf("Insira a quantidade de jogadores: ");
		scanf("%d", &qtd_jogadores);	
		
		if(qtd_jogadores == 0 && num_prova == 0){
			break;
		}
		
		for(i = 0; i < qtd_jogadores; i++){
			
			printf("Nome: ");
			scanf("%s", &nome);
			
			printf("Classificação: ");
			scanf("%d", &classificacao);
			
			printf("Tempo: ");
			scanf("%d", &tempo);
			
			printf("Clube a ou b: ");
			scanf("%s", &clube);
			
			if(strcmp(clube, "a") == 0){
					if(classificacao == 1)
					{
						 pontos_a += 9;	
					} else if(classificacao == 2){
						 pontos_a += 6;	
					} else if(classificacao == 3){
						 pontos_a += 4;	
					} else if(classificacao == 4){
						 pontos_a += 3;	
					}
				 	
			} 
			if(strcmp(clube, "b") == 0){
				 	if(classificacao == 1)
					{
						 pontos_b += 9;	
					} else if(classificacao == 2){
						 pontos_b += 6;	
					} else if(classificacao == 3){
						 pontos_b += 4;	
					} else if(classificacao == 4){
						 pontos_b += 3;	
					}
			} 
		}	
	}
	printf("Pontos clube A: %d \nPontos clube B: %d",pontos_a,pontos_b);
	if(pontos_a > pontos_b){
		printf("\nVencedor clube A");
	} else if(pontos_a < pontos_b){
		printf("\nVencedor clube B");
	} else{
		printf("Empate");
	}
}