#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int limite_inferior = 0, limite_superior = 0, multiplo, i, j;
	
	printf("Digite o limite inferior: ");
	scanf("%d", &limite_inferior);
	
	printf("Digite o limite superior: ");
	scanf("%d", &limite_superior);
	
	
	if(0 < limite_inferior){
		for(i = limite_inferior; i < limite_superior; i++){
			multiplo = 0;
			for(j = 2; j < i; j++){
				if(i % j == 0){
					multiplo++;					
				}  
			}
			if(multiplo == 0){
				printf("%d\n",i);
			}
		}	
	} else {
		printf("Digite um valor válido.");
	}		
}


