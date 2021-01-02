#include <stdio.h>
#include <locale.h>
#include "HICP.c"	

int main(){
	setlocale(LC_ALL, "Portuguese");
	float lado;
		
	printf("Digite o lado do quadrado: ");
	scanf("%f", &lado);
		
	printf("A área do quadrado: ");
	printf("%.3f", area_quadrado(lado));
	printf("\n");
	
	return 0;
}


