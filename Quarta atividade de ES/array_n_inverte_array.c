#include <stdio.h>
#include <locale.h>
#include <conio.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	int tam_vetor = 0, i = 0;
	
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int A[tam_vetor], B[tam_vetor]; 
	
	for(i = 0; i < tam_vetor; i++){
		printf("Insira o valor na posição %d: ", i);
		scanf("%i", &A[i]);
		B[(tam_vetor - 1) - i] = A[i];
	}
	
	
	for(i = 0; i < tam_vetor; i++){
		printf("%i\n", B[i]);
	}
}