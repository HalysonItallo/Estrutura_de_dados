#include <stdio.h>
#include <locale.h>
#include <conio.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	int tam_vetor = 0, i;
	
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int A[tam_vetor], B[tam_vetor], C[tam_vetor*2]; 
	
	for(i = 0; i < tam_vetor; i++){
		printf("Insira o valor na posição %d do vetor A: ", i);
		scanf("%i", &A[i]);
		printf("Insira o valor na posição %d do vetor B: ", i);
		scanf("%i", &B[i]);
	}
	
	for(i = 0; i < sizeof(C)/sizeof(int); i++){
		 if(i < ((sizeof(C)/sizeof(int))/2)){
			C[i] = A[i];
		 } else {
			C[i] = B[i-((sizeof(C)/sizeof(int))/2)];
		 }
	}
	
	for(i = 0; i < sizeof(C)/sizeof(int); i++){
		printf("%i\n", C[i]);
	}
}