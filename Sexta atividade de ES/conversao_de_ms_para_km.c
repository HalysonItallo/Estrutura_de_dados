#include <stdio.h>
#include <locale.h>
#include "HICP.c"	

int main(int argc, char** argv){
	setlocale(LC_ALL, "Portuguese");
	
	float velocidade;
	printf("Digite o valor da sua velocidade em m/s: ");
	scanf("%f", &velocidade);
	
	float resultado = ms_para_km(velocidade);
	
	printf("%.3f", resultado);
	printf("\n");
	
	return 0;
}


