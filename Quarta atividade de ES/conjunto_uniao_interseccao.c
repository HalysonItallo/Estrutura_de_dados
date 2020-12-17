#include <stdio.h>
#include <locale.h>
#include <conio.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	int tam_vetor = 0, i, j, k;
	
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int A[tam_vetor], B[tam_vetor], conj_uniao[tam_vetor*2], index = 0, tam_interseccao = 0; 
	
	for(i = 0; i < tam_vetor; i++){
		printf("Insira o valor na posição %d do vetor A: ", i);
		scanf("%i", &A[i]);
		printf("Insira o valor na posição %d do vetor B: ", i);
		scanf("%i", &B[i]);
	}
	
	for(i = 0; i < sizeof(conj_uniao)/sizeof(int); i++){
		 if(i < ((sizeof(conj_uniao)/sizeof(int))/2)){
			conj_uniao[i] = A[i];
		 } else {
			conj_uniao[i] = B[i-((sizeof(conj_uniao)/sizeof(int))/2)];
		 }
	}
		
	for(i = 0; i < tam_vetor; i++){
		for(j = 0; j < tam_vetor; j++){
			 if(A[i] == B[j]){
				tam_interseccao++;
			}	
		}
	}
	
	int  conj_interseccao[tam_interseccao];
	
	for(i = 0; i < tam_vetor; i++){
		for(j = 0; j < tam_vetor; j++){
			 if(A[i] == B[j]){
				conj_interseccao[index++] = A[i];
			}
		}
	}
	
	printf("Conjunto união: {");
	for(i = 0; i < sizeof(conj_uniao)/sizeof(int); i++){
		if(i != sizeof(conj_uniao)/sizeof(int) -1){
			 printf("%i, ", conj_uniao[i]);	
		} else {
			printf("%i", conj_uniao[i]);
		}
	}
	printf("}\n");	
	
	
	printf("Conjunto intersecção: {");
	for(i = 0; i < sizeof(conj_interseccao)/sizeof(int); i++){
		if(i != sizeof(conj_interseccao)/sizeof(int) -1){
			 printf("%i, ", conj_interseccao[i]);	
		} else {
			printf("%i", conj_interseccao[i]);
		}
	}
	printf("}\n");
	
		
}