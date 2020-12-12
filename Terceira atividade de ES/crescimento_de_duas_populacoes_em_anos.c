#include <stdio.h>
#include <locale.h>


void main(){	
	setlocale(LC_ALL, "Portuguese");
	int total_anos = 0;
	float populacao_A = 200000, populacao_B = 800000;
	
	while(populacao_A <= populacao_B){	
		populacao_A = populacao_A + (populacao_A * 3.5) / 100;
		populacao_B = populacao_B + (populacao_B * 1.35) / 100;
		
		total_anos += 1;
	}	
	
	printf("Total de anos: %d", total_anos);

}