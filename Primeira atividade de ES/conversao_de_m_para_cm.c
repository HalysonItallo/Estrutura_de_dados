#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float m, cm;
		
	printf("Digite o seu valor em M: ");
	scanf("%f", &m);
		
	printf("O seu valor em Cm: ");
	cm = m * 100;
	printf("%.3f", cm);
	printf("\n");
	
	system("PAUSE");
}
