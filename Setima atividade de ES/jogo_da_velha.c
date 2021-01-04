#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

char jogo[3][3];
char jogador1[50], jogador2[50];

void inicializar_matiz(){
	int i,j;
	for(i = 0;i < 3; i++){
		for(j = 0;j < 3; j++){
			jogo[i][j] = ' ';
		}
	}	
}

int eh_valido(char caracter){
	if(caracter == 'X' || caracter == 'O'){
		return 1;
	}
	return 0;
}

int coordernada_validada(int x, int y){
	if(0 <= x && x < 3){
		if(0 <= y && y < 3){
			return 1;
		}
	}
	return 0;
} 

int posicao_vazia(int x, int y){
	if(jogo[x][y] != 'X' && jogo[x][y] != 'O'){
		return 1;
	}
	return 0;
}

int vencedor_linha(){
	int i, j, contador = 1;
	for(i = 0;i < 3; i++){
		for(j = 0;j < 2	; j++){
			if(eh_valido(jogo[i][j]) && jogo[i][j] == jogo[i][j+1]){
				contador++;
			}
		}
		if(contador == 3){
			return 1;
		} else{
			contador = 1;
		}
	}	
	return 0;
}

int vencedor_coluna(){
	int i, j, contador = 1;
	for(i = 0;i < 3; i++){
		for(j = 0;j < 2	; j++){
			if(eh_valido(jogo[j][i]) && jogo[j][i] == jogo[j+1][i]){
				contador++;
			}
		}
		if(contador == 3){
			return 1;
		} else{
			contador = 1;
		}
	}	
	return 0;
}

int vencedor_diagonal_principal(){
	int i, contador = 1;
	for(i = 0; i < 2; i++){
		if(eh_valido(jogo[i][i]) && jogo[i][i] == jogo[i+1][i+1]){
			contador++;
		}
	}
	if(contador == 3){
			return 1;
	} else{
		return 0;	
	}
}

int vencedor_diagonal_secundaria(){
	int i, contador = 1;	
	for(i = 0; i < 2; i++){
		if(eh_valido(jogo[i][3 - i - 1]) && jogo[i][3 - i - 1] == jogo[i+1][3 - i - 2]){
			contador++;
		}
	}
	if(contador == 3){
			return 1;
	} else{
		return 0;	
	}
}

void mostrar_jogo_da_velha(){
	int i, j;
	
	printf("\n\t    0  1  2\n");
	for(i = 0;i < 3; i++){
		printf("\t%d ",i);
		for(j = 0;j < 3; j++){
			if(eh_valido(jogo[i][j])){
				if(j < 2){
					printf(" %c |", jogo[i][j]);	
				} else {
					printf(" %c ", jogo[i][j]);
				}
				
			} else{
				if(j < 2){
					printf("   |");
				} else {
					printf("   ");
				}
			}
		}
		if(i < 2){
			 printf("\n\t   ---------\n");	
		}
	}		
}

void jogar_1vs1(int escolha_marcacao){
	int x, y, validar, jogador = 1, vencedor = 0, rodadas = 0;
	
	do{
		do{
			mostrar_jogo_da_velha();
			
			printf("\n\nDigite a coordenada que deseja jogar: ");
			scanf("%d%d", &x, &y);
			
			validar = coordernada_validada(x, y);
			if(validar){
				validar += posicao_vazia(x, y);
			}
		} while(validar != 2);
		
		if(jogador==1){
			if(escolha_marcacao == 1){
				jogo[x][y] = 'X';	
			} else{
				jogo[x][y] = 'O';
			}
			
		} else{
			if(escolha_marcacao == 1){
				jogo[x][y] = 'O';	
			} else{
				jogo[x][y] = 'X';
			}
		}
		
		rodadas++;
		jogador++;
		
		if(jogador == 3){
				jogador = 1;
		}
		
		vencedor += vencedor_linha();
		vencedor += vencedor_coluna();
		vencedor += vencedor_diagonal_principal();
		vencedor += vencedor_diagonal_secundaria();
	} while(vencedor == 0 && rodadas < 9);
	if(vencedor != 0){
		if(jogador - 1 == 1){
			printf("\nParabéns. Você venceu %s!!!\n", jogador1);
		}else{
			printf("\nParabéns. Você venceu %s!!!\n", jogador2);
		}
	} else{
		printf("\nEmpate\n\n");
	}
	
}

void cpu(char marcacao_cpu){
	int procurar_opcao_cpu = 0, i, j;
	if(posicao_vazia(1,1)){
		procurar_opcao_cpu = 1;
		jogo[1][1] = marcacao_cpu;
	} else {
		for(i = 1; i < 3; i++){
			for(j = 0; j < 3; j++){
				if(posicao_vazia(i,0) && ((jogo[1][1] == marcacao_cpu && jogo[2 - i][2] == marcacao_cpu && i != 1) || (jogo[i][1] == marcacao_cpu && jogo[i][2] == marcacao_cpu))){
					jogo[i][0] = marcacao_cpu; i = 3; j = 3;
				} else if(posicao_vazia(i,2) && ((jogo[1][1] == marcacao_cpu && jogo[2-i][0] == marcacao_cpu && i != 1) || (jogo[i][1] == marcacao_cpu && jogo[i][0] == marcacao_cpu))){
					jogo[i][2] = marcacao_cpu; i = 3; j = 3;
				} else if(posicao_vazia(0,i) && (jogo[1][i] == marcacao_cpu && jogo[2][i] == marcacao_cpu) ){
					jogo[0][i] = marcacao_cpu; i = 3; j = 3;
				} else if(posicao_vazia(2,i) && (jogo[0][i] == marcacao_cpu && jogo[1][i] == marcacao_cpu) ){
					jogo[2][i] = marcacao_cpu; i = 3; j = 3;					
				} else if(posicao_vazia(1,i) && (jogo[0][i] == marcacao_cpu && jogo[2][i] == marcacao_cpu) ){
					jogo[1][i] = marcacao_cpu; i = 3; j = 3;	
				}  else if(posicao_vazia(i,1) && (jogo[i][0] == marcacao_cpu && jogo[i][2] == marcacao_cpu) ){
					jogo[i][1] = marcacao_cpu; i = 3; j = 3;	
				}            
			}
		}
	}
	if(!procurar_opcao_cpu){
		if(((jogo[0][0]!= marcacao_cpu && jogo[2][2] != marcacao_cpu) || (jogo[0][2] != marcacao_cpu && jogo[2][0] != marcacao_cpu)) && posicao_vazia(2,1) && 1){
			jogo[2][1] = marcacao_cpu;
		} else if(posicao_vazia(0,0)){
			jogo[0][0] = marcacao_cpu;
		} else if(posicao_vazia(0,2)){
			jogo[0][2] = marcacao_cpu;			
		} else if(posicao_vazia(2,0)){
			jogo[2][0] = marcacao_cpu;
		} else if(posicao_vazia(2,2)){
			jogo[2][2] = marcacao_cpu;			
		} 
	}
}

void jogar_1vsComp(int escolha_marcacao, int vez){
	int x, y, validar, jogador = 1, vencedor = 0, rodadas = 0;
	
	do{
		do{
			mostrar_jogo_da_velha();
			if(vez != 1){
				if(jogador==1){
					printf("\n\nDigite a coordenada que deseja jogar: ");
					scanf("%d%d", &x, &y);
				
					validar = coordernada_validada(x, y);
					if(validar){
						validar += posicao_vazia(x, y);
					}	
				} else {
					printf("\n\nVez do computador");
					validar = 2;
				}	
			} else {
				if(jogador == 1){
					printf("\n\nDigite a coordenada que deseja jogar: ");
					scanf("%d%d", &x, &y);
				
					validar = coordernada_validada(x, y);
					if(validar){
						validar += posicao_vazia(x, y);
					}	
				} else {
					printf("\n\nVez do computador");
					validar = 2;
				}
			}
			
		} while(validar != 2);
		
		if(jogador == 1){
			if(escolha_marcacao == 1){
				jogo[x][y] = 'X';	
			} else{
				jogo[x][y] = 'O';
			}
			
		} else{
			if(escolha_marcacao == 1){
				cpu('O');
			} else{
				cpu('X');
			}
		}
		
		rodadas++;
		jogador++;
		
		if(jogador == 3){
				jogador = 1;
		}
		
		vencedor += vencedor_linha();
		vencedor += vencedor_coluna();
		vencedor += vencedor_diagonal_principal();
		vencedor += vencedor_diagonal_secundaria();
	} while(vencedor == 0 && rodadas < 9);
	if(vencedor != 0){
		if(jogador - 1 == 1){
			printf("\nParabéns. Você venceu %s!!!\n", jogador1);
		}else{
			printf("\nParabéns. Você venceu %s!!!\n", jogador2);
		}
	} else{
		printf("\nEmpate\n\n");
	}	
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	int escolha, escolha_1vs1 = 0,escolha_1vsComp = 0, escolha_marcacao = 0, vez = -1;
	printf("*** Bem vindo ao jogo da velha ***\n");
	
	while(1) {
		printf("1. Jogar contra o computador\n2. Jogar contra outro jogador\n3. Sair\n\nopção >>> ");
		scanf("%d", &escolha);
		getchar();
		switch(escolha){
		case 1:
			do{
				printf("1. Computador começa o jogo\n2. Você começa o jogo\n3. Retornar para o menu principal\n\nopção >>> ");	
				scanf("%d", &vez);
				if(vez == 3){
					break;
				}
				getchar();
				if(vez == 1){
					printf("Jogador digite o nome do computador: ");
					fgets(jogador1, 50, stdin);
			
					printf("Jogador 1 digite seu nome: ");
					fgets(jogador2, 50, stdin);	
				} else if(vez == 2){
					printf("Jogador 1 digite seu nome: ");
					fgets(jogador1, 50, stdin);
					
					printf("Jogador digite o nome do computador: ");
					fgets(jogador2, 50, stdin);	
				}
			
				printf("Jogador 1 deseja jogar com O ou X ?");
				printf("\n1. X\n2. O\n\nopcão >>> ");	
				scanf("%d", &escolha_marcacao);
			
				inicializar_matiz();
				jogar_1vsComp(escolha_marcacao, vez);
				
				printf("Deseja jogar novamente?\n");
				printf("\n1. Sim\n2. Não\n\nopcão >>> ");	
				
				scanf("%d", &escolha_1vsComp);
				getchar();
				system("cls");
			} while(escolha_1vsComp == 1);
			break;
			
		case 2:
			do{
				printf("Jogador 1 digite seu nome: ");
				fgets(jogador1, 50, stdin);
			
				printf("Jogador 2 digite seu nome: ");
				fgets(jogador2, 50, stdin);
				
				printf("Jogador 1 deseja jogar com O ou X ?");
				printf("\n1. X\n2. O\n\nopcão >>> ");	
				scanf("%d", &escolha_marcacao);
				
				inicializar_matiz();
				jogar_1vs1(escolha_marcacao);
				
				printf("Deseja jogar novamente?\n");
				printf("\n1. Sim\n2. Não\n\nopcão >>> ");	
				scanf("%d", &escolha_1vs1);
				getchar();
				system("cls");
			} while(escolha_1vs1 == 1);
			break;
			
		default:
				break;
		}	
		system("cls");
	}
	
	return 0;
}










