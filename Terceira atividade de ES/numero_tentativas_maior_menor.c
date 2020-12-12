#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int numero_random = 0, numero_pensado = 0, total_tentativas = 0;
	srand(time(NULL));   
	numero_random = rand() % 50;
		
	while(1){
		printf("Qual o número que você pensou: ");
		scanf("%d", &numero_pensado);
		
		if(numero_pensado < numero_random){
			printf("Maior\n");
		} 
		if(numero_pensado > numero_random){
			printf("Menor\n");
		}
		if(numero_random == numero_pensado){
			break;
		}
		
		total_tentativas += 1; 
	}
	
	
	printf("Você tentou %d vezes", total_tentativas);

}


