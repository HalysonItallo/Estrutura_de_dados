#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura;
		
	printf("Digite a base do tri�ngulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do tri�ngulo: ");
	scanf("%f", &altura);
	
	
	printf("A �rea do tri�ngulo: ");
	printf("%.3f", (base*altura)/2);
	printf("\n");
	
	system("PAUSE");
}
