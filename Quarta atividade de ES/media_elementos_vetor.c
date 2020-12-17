#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam_vetor = 0, i;
	float soma_total;
	
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int v[tam_vetor];
	
	for(i = 0; i < tam_vetor; i++){
		printf("Insira o valor na posição %d: ", i);
		scanf("%d", &v[i]);
		soma_total += v[i];
	}
	
	
	printf("Sua média de números do vetor: %.1f", soma_total/tam_vetor);
	
}