#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura;
		
	printf("Digite a base do triângulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do triângulo: ");
	scanf("%f", &altura);
	
	
	printf("A área do triângulo: ");
	printf("%.3f", (base*altura)/2);
	printf("\n");
	
	system("PAUSE");
}
