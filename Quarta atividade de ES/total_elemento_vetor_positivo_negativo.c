#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam_vetor = 0, i, j, total_positivos = 0, total_negativos = 0;
	 
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
			if(v[i][j] >= 0){
				total_positivos += v[i][j];
			} else {
				total_negativos += v[i][j];
			}
		}	
	}	
	printf("\nA soma dos elementos positivos: %d", total_positivos);
	printf("\nA soma dos elementos negativos: %d", total_negativos);
	
}