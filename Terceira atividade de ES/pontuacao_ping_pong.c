#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main (){
	setlocale(LC_ALL, "Portuguese");
	int pontuacao_jogador1 = 0, pontuacao_jogador2 = 0, codigo,i;
	
	for(i=1;i<=21;i++) {
		printf("\nDigite o codigo do jogador: ");
		scanf(" %d", &codigo);
		if(codigo==1){
			pontuacao_jogador1++;
		}
		if(codigo==2){
				pontuacao_jogador2++;
		}
	}
	
	if(abs(pontuacao_jogador1 - pontuacao_jogador2) >= 2){
		if (pontuacao_jogador1 > pontuacao_jogador2){
			printf("\nO jogador 01 é o vencedor");
		}
		if( pontuacao_jogador2 > pontuacao_jogador1){
			printf("\nO jogador 02 é o vencedor");
		}	
	} else {
		printf("\nContinua a partida até alguém fazer uma diferença de 2 pontos\n");
		while(1)
		{
			printf("\nDigite o codigo do jogador: ");
			scanf(" %d", &codigo);
			if(codigo==1){
				pontuacao_jogador1++;
			}
			if(codigo==2){
					pontuacao_jogador2++;
			}
			if(abs(pontuacao_jogador1 - pontuacao_jogador2) >= 2){
				if (pontuacao_jogador1 > pontuacao_jogador2){
					printf("\nO jogador 01 é o vencedor");
				}
			 	if( pontuacao_jogador2 > pontuacao_jogador1){
					printf("\nO jogador 02 é o vencedor");
				}	
				break;
			}
		}
	}
	
	
}