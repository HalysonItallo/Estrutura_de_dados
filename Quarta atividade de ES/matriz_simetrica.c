#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam_vetor = 0, i, j, elemento = 0;
	bool simetrica = true;
	 
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int v[tam_vetor][tam_vetor], v_transposta[tam_vetor][tam_vetor];
	
	for(i = 0; i < tam_vetor; i++){
		for(j = 0;j < tam_vetor; j++){
			printf("Digite o elemento que corresponde a linha %d e a coluna %d: ", i+1,j+1);
			scanf("%d", &elemento);
			v[i][j] = elemento;
			v_transposta[j][i] = elemento;	
		}	
	}	
		
	for(i = 0; i < tam_vetor; i++){
		for(j = 0;j < tam_vetor; j++){
			if(v_transposta[i][j] != v[i][j]){
				simetrica = false;
				break;
			}	
		}	
	}

	if(simetrica){
		printf("É simétrica");
	} else {
		printf("Não é simétrica");
	}
	
}