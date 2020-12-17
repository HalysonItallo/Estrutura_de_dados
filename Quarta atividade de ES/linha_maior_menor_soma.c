#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam_vetor = 0, i, j, contador_linha = 0;
	 
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int v[tam_vetor][tam_vetor], linhas_soma[tam_vetor], 
			index = 0, maior = 0, menor = 0, posicao_maior = 0, 
			posiciao_menor = 0;
	
	for(i = 0; i < tam_vetor; i++){
		for(j = 0;j < tam_vetor; j++){
			printf("Digite o elemento que corresponde a linha %d e a coluna %d: ", i+1,j+1);
			scanf("%d", &v[i][j]);
			contador_linha += v[i][j];	
		}
		linhas_soma[index++] = contador_linha; 
		contador_linha = 0;	
	}	
	
	
	maior = linhas_soma[0]; 
	menor = linhas_soma[0];
	for(i = 1; i < sizeof(linhas_soma)/sizeof(int); i++){
		if(maior < linhas_soma[i]){
			maior = linhas_soma[i];
			posicao_maior = i;
		} 
		if(linhas_soma[i] < menor){
			menor = linhas_soma[i];
			posiciao_menor = i;
		}
	}
	
	printf("\nLinha %d é a maior soma com: %d", posicao_maior+1, maior);
	printf("\nLinha %d é a menor soma com: %d", posiciao_menor+1, menor);
		
	
}