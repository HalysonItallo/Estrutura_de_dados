#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<stdbool.h>
#include<locale.h>
#include<string.h>

#define max_rodadas 20

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	fflush(stdin);
	
	int i, rodada = 1, v_entrada[max_rodadas], v_sequencia[max_rodadas], tempo = 3000;
	bool verificar_rodada;
	char entrada_cores[20];
	
	char *cores[4] = {"verde", "amarelo", "vermelho", "azul"};
	
	printf("*** Bem vindo a uma réplica do jogo genius ***");
	printf("\ncarregando ...\n\n");
	Sleep(3000);    
	system("cls");  
	for(i = 0; i < max_rodadas; i++){
		v_sequencia[i] = rand() % 3;
	}	
	
	while(rodada != max_rodadas){
		for(i = 0; i < rodada; i++){
  		printf("%s",cores[v_sequencia[i]]);
  		Sleep(tempo);
  		system("cls");
  		Sleep(1000);
  		if(i != rodada - 1)
  		printf("Próxima cor");
  		Sleep(500);
  		system("cls");
		}
		
		for(i = 0; i < rodada; i++){
			printf("Digite a %d° cor da sequência: ", i + 1);
			scanf("%s", entrada_cores);
			if(strcmp(entrada_cores,"verde") == 0){
				v_entrada[i] = 0; 
			} else if(strcmp(entrada_cores, "amarelo") == 0){
				v_entrada[i] = 1;
			} else if(strcmp(entrada_cores, "vermelho") == 0){
				v_entrada[i] = 2;
			} else if(strcmp(entrada_cores, "azul") == 0){
				v_entrada[i] = 3;					 			 
			} else {
				printf("Você digitou um valor inválido");
				system("pause");
				break;
			}
			system("cls");
		}	
		
		for(i = 0; i < rodada; i++){
			if(v_entrada[i] == v_sequencia[i]){
				verificar_rodada = true;
			}else {
				verificar_rodada = false;
			}
		}
		
		if(verificar_rodada){
			printf("Você acertou !!!");
			Sleep(3000);
			rodada++;
			tempo -= 10;
			system("cls");
		} else{
			printf("Você perdeu !!!\n");
			system("pause");
		}
	}
	
	system("cls");
	printf("Você venceu o desafio !!!");
	
	return 0;
}