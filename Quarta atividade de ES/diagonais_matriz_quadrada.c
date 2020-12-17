#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam_vetor = 0, i, j, diagonal_principal = 0, diagonal_secundaria = 0, sem_diagonal = 0, elemento = 0;
	 
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int v[tam_vetor][tam_vetor];
	
	for(i = 0; i < tam_vetor; i++){
		for(j = 0;j < tam_vetor; j++){
			printf("Digite o elemento que corresponde a linha %d e a coluna %d: ", i+1,j+1);
			scanf("%d", &v[i][j]);
		}	
	}	
	
	for(i = 0; i < tam_vetor; i++){
		for(j = 0;j < tam_vetor; j++){
			elemento = v[i][j];
			if(j == i){
				printf("%d", elemento);
				diagonal_principal += elemento;
			} 
			if((j+i+2) == (tam_vetor+1)){
				diagonal_secundaria += elemento;
			}
			if((j!=i) && !((j+i+2) == (tam_vetor+1))){
				sem_diagonal += elemento;
			}
		}	
	}	
	
	printf("\nSomatória da diagonal principal: %d", diagonal_principal);
	printf("\nSomatória da diagonal secundária: %d", diagonal_secundaria);
	printf("\nSomatória dos números que não estão nas diagonais: %d", sem_diagonal);
	
}