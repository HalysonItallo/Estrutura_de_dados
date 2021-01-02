#include <stdio.h>
#include <locale.h>
#include "HICP.c"	

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio;
		
	printf("Digite o raio da esfera: ");
	scanf("%f", &raio);
		
	printf("O volume da esfera é: ");
	
	printf("%.3f", volume_esfera(raio));
	printf("\n");
	
	return 0;
}


