#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float kg, g;
		
	printf("Digite o seu valor em Kg: ");
	scanf("%f", &kg);
		
	printf("O seu valor em g: ");
	g = kg * 1000;
	printf("%.3f", g);
	printf("\n");
	
	system("PAUSE");
}
