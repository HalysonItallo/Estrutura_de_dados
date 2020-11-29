#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura;
		
	printf("Digite a base do retângulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do retângulo: ");
	scanf("%f", &altura);
	
	printf("A área do retângulo: ");
	printf("%.3f", (base*altura));
	printf("\n");
	
	system("PAUSE");
}
