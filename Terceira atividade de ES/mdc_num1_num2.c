#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, resto;
	 
	printf("Insira o primeiro número: ");
	scanf("%d", &num1);
	 
	printf("Insira o segundo número: ");
	scanf("%d", &num2);
	do {
			resto = num1 % num2;
			
			num1 = num2;
			num2 = resto;
	} while (resto != 0);
	printf("Seu MDC: %d", num1);
}


