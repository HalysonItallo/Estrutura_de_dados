#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float raio;
		
	printf("Digite o raio da circufer�ncia: ");
	scanf("%f", &raio);
		
	printf("O comprimento da circufer�ncia: ");
	printf("%.3f", 2 * M_PI * raio);
	printf("\n");
	
	system("PAUSE");
}
