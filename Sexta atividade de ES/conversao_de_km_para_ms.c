#include <stdio.h>
#include <locale.h>
#include "HICP.c"	

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float velocidade;
	printf("Digite o valor da sua velocidade em m/s: ");
	scanf("%f", &velocidade);
	
	float resultado = km_para_ms(velocidade);
	
	printf("%.3f", resultado);
	printf("\n");
	
	return 0;
}


