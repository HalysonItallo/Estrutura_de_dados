#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float real;
	printf("Digite o seu valor em Real: ");
	scanf("%f", &real);
	printf("%.3f", (real*70)/100);
	printf("\n");
	
	system("PAUSE");
}
