#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam_vetor = 0, i, j;
	 
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int v[tam_vetor][tam_vetor];
	
	for(i = 0; i < tam_vetor; i++){
		for(j = 0;j < tam_vetor; j++){
			if(i == j){
				v[i][j] = 1;
			} else {
				v[i][j] = 0; 
			}	
		}	
	}	
	
	for(i = 0; i < tam_vetor; i++){
		printf("\nSeus elementos da linha %d: ", i+1);
		for(j = 0;j < tam_vetor; j++){
			printf("%d ", v[i][j]);	
		}	
		printf("\n");
	}	
	
}