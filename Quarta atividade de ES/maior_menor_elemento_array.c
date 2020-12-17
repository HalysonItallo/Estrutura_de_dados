#include <stdio.h>
#include <locale.h>
#include <conio.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	int tam_vetor = 0, i = 0, j, maior = 0,
	 	  menor = 0, posicao_maior_linha = 0,posicao_maior_coluna = 0, 
			posicao_menor_linha = 0, posicao_menor_coluna = 0;
	
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int v[tam_vetor][tam_vetor]; 



	for(i = 0; i < tam_vetor; i++){
		for(j = 0;j < tam_vetor; j++){
			printf("Digite o elemento que corresponde a linha %d e a coluna %d: ", i+1,j+1);
			scanf("%d", &v[i][j]);
		}	
	}	
	maior = v[0][0]; 
	menor = v[0][0];

	for(i = 1; i < tam_vetor; i++){
		for(j = 1;j < tam_vetor; j++){
			if(maior < v[i][j]){
				maior = v[i][j];
				posicao_maior_linha = i;
				posicao_maior_coluna = j;
			} 
			if(v[i][j] < v[i][j]){
				menor = v[i][j];
				posicao_menor_linha = i;
				posicao_menor_coluna = j;
			}
		}	
	}	
	
	
	
	printf("\nValor do maior: %d e posição -> linha: %d | coluna %d", maior, posicao_maior_linha+1, posicao_maior_coluna+1);
	printf("\nValor do menor: %d e posição-> linha: %d | coluna %d", menor, posicao_menor_linha+1, posicao_menor_coluna+1);
}