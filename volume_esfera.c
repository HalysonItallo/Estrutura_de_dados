#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float raio, c;
		
	printf("Digite o raio da esfera: ");
	scanf("%f", &raio);
		
	printf("O volume da esfera é: ");
	c = (4 * 3.14 * pow(raio,3)) / 3;
	printf("%.3f", c);
	printf("\n");
	
	system("PAUSE");
}
