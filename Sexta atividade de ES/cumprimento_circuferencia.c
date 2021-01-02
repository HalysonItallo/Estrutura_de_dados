#include <stdio.h>
#include <locale.h>
#include "HICP.c"	

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio;
		
	printf("Digite o raio da circuferência: ");
	scanf("%f", &raio);
		
	printf("O comprimento da circuferência: ");
	printf("%.3f", comprimento_circunferencia(raio));
	printf("\n");
	
	return 0;
}


