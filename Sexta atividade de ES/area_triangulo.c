#include <stdio.h>
#include <locale.h>
#include "HICP.c"	

int main(){
	setlocale(LC_ALL, "Portuguese");
	float base, altura;
		
	printf("Digite a base do tri�ngulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do tri�ngulo: ");
	scanf("%f", &altura);
	
	
	printf("A �rea do tri�ngulo: ");
	printf("%.3f", area_trinagulo(base, altura));
	printf("\n");
	
	return 0;
}


