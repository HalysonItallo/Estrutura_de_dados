#include <stdio.h>
#include <locale.h>
#include "HICP.c"	

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio;
		
	printf("Digite o raio da circufer�ncia: ");
	scanf("%f", &raio);
		
	printf("O comprimento da circufer�ncia: ");
	printf("%.3f", comprimento_circunferencia(raio));
	printf("\n");
	
	return 0;
}


