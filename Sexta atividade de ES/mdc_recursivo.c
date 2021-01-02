#include <stdio.h>
#include <locale.h>
#include "HICP.c"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	 
	printf("Insira o primeiro número: ");
	scanf("%d", &num1);
	 
	printf("Insira o segundo número: ");
	scanf("%d", &num2);
	
	printf("Seu MDC: %d", mdc_recursivo(num1, num2));
	
	return 0;
}


