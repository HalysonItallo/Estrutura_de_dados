#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura;
		
	printf("Digite a base do ret�ngulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do ret�ngulo: ");
	scanf("%f", &altura);
	
	printf("A �rea do ret�ngulo: ");
	printf("%.3f", (base*altura));
	printf("\n");
	
	system("PAUSE");
}
