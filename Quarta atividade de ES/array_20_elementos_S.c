#include <stdio.h>
#include <locale.h>
#include <conio.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	int tam_vetor = 0, i = 0, s = 0;
	int A[20]; 
	for(i = 0; i < 20; i++){
		printf("Insira o valor na posição %d: ", i);
		scanf("%i", &A[i]);
	}
	for(i = 0; i < sizeof(A)/sizeof(int); i++){
		s += (A[i] - A[sizeof(A)/sizeof(int) - 1 - i])^2; 
	}

	printf("O valor de s: %i", s);
}