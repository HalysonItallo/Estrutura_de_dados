#include <stdio.h>
#include <locale.h>
#include "HICP.c"	

int main(){
	setlocale(LC_ALL, "Portuguese");
	float base, altura;
		
	printf("Digite a base do triângulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do triângulo: ");
	scanf("%f", &altura);
	
	
	printf("A área do triângulo: ");
	printf("%.3f", area_trinagulo(base, altura));
	printf("\n");
	
	return 0;
}


