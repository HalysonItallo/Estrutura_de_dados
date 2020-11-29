#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float lado;
		
	printf("Digite o lado do quadrado: ");
	scanf("%f", &lado);
		
	printf("A área do quadrado: ");
	printf("%.3f", lado*lado);
	printf("\n");
	
	system("PAUSE");
}
