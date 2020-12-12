#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 
 void main(){
	setlocale(LC_ALL, "Portuguese");
	int qtd_eleitores = 0, opcao_voto = 0, i,
			qtd_candidate1 = 0, qtd_candidate2 = 0, qtd_candidate3 = 0,
			qtd_votos_nulos = 0, qtd_votos_brancos = 0;
			 
	
	printf("Digite a quantidade de habitantes: ");
	scanf("%d", &qtd_eleitores);
	
		
	for(i = 0; i < qtd_eleitores; i++){
		printf("1, 2, 3 = voto para os respectivos candidatos \n9 = voto nulo \n0 = voto em branco\n");
		
		printf("Insira o voto da população: ");
		scanf("%d", &opcao_voto);
	
		if(opcao_voto == 1){
			qtd_candidate1++;
		} else if(opcao_voto == 2){
			qtd_candidate2++;
		} else if(opcao_voto == 3){
			qtd_candidate3++;
		} else if(opcao_voto == 9){
			qtd_votos_nulos++;
		} else if(opcao_voto == 0){
			qtd_votos_brancos++;
		} else{
			printf("Valor inválido");
			system("pause");
		}
		printf("\n");
	}
	printf("Voto(s) do candidato 1 -> %d\nVoto(s) do candidato 2 -> %d\nVoto(s) do candidato 3 -> %d", qtd_candidate1, qtd_candidate2, qtd_candidate3);
		printf("\nVoto(s) nulo -> %d\nVoto(s) branco -> %d",qtd_votos_nulos, qtd_votos_brancos);
		
		if(qtd_candidate1 > qtd_candidate2 && qtd_candidate1 > qtd_candidate3){
			printf("\nO candidato 1 venceu");
		} else if(qtd_candidate2 > qtd_candidate1 && qtd_candidate2 > qtd_candidate3){
			printf("\nO candidato 2 venceu");
		} else if(qtd_candidate3 > qtd_candidate1 && qtd_candidate3 > qtd_candidate2){
			printf("\nO candidato 3 venceu");
		} else {
			printf("\nSegundo turno");
		}
}

