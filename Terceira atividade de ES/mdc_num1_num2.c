#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, resto;
	 
	printf("Insira o primeiro n�mero: ");
	scanf("%d", &num1);
	 
	printf("Insira o segundo n�mero: ");
	scanf("%d", &num2);
	do {
			resto = num1 % num2;
			
			num1 = num2;
			num2 = resto;
	} while (resto != 0);
	printf("Seu MDC: %d", num1);
}


