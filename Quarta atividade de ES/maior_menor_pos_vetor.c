#include <stdio.h>
#include <locale.h>
#include <conio.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	int tam_vetor = 0, i = 0, maior = 0,
	 	  menor = 0, posicao_maior = 0, posiciao_menor = 0;
	
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int A[tam_vetor]; 
	
	for(i = 0; i < tam_vetor; i++){
		printf("Insira o valor na posição %d: ", i);
		scanf("%i", &A[i]);
	}
	
	maior = A[0]; 
	menor = A[0];
	for(i = 1; i < sizeof(A)/sizeof(int); i++){
		if(maior < A[i]){
			maior = A[i];
			posicao_maior = i;
		} 
		if(A[i] < menor){
			menor = A[i];
			posiciao_menor = i;
		}
	}
	
	printf("\nValor do maior: %d e posição: %d", maior, posicao_maior);
	printf("\nValor do menor: %d e posição: %d", menor, posiciao_menor);
}