#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, num3;
		
	printf("Digite o seu primeiro n�mero: ");
	scanf("%f", &num1);
	
	printf("Digite o seu segundo n�mero: ");
	scanf("%f", &num2);
	
	printf("Digite o seu terceiro n�mero: ");
	scanf("%f", &num3);
	
	printf("Sua m�dia ponderada: ");
	printf("%.3f", (num1+num2+num3) / 3);
	printf("\n");
	
	
	
	system("PAUSE");
}
