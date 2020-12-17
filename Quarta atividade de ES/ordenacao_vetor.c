	#include <stdio.h>
	#include <locale.h>
	#include <stdlib.h>
	
	
	
	main() {
	setlocale(LC_ALL, "Portuguese");
	
	int tam_vetor = 0, i = 0, j = 0, menor = 0, aux_v = 0;
	
	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam_vetor);
	
	int v[tam_vetor]; 
	
	for(i = 0; i < tam_vetor; i++){
		printf("Insira o valor na posição %d: ", i);
		scanf("%i", &v[i]);
	}
		
	for(i = 0; i < tam_vetor; i++){
		menor = i;
		for (j = i + 1; j < tam_vetor; j++){
			if (v[j] < v[menor]){
				 menor = j;
			 }
		}
	  aux_v = v[i];
	  v[i] = v[menor];
	  v[menor] = aux_v;
	}
	
	for (i = 0; i < tam_vetor; i++){
		printf("%d\n", v[i]);
	}
	  
}
