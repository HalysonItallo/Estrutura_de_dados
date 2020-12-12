#include <stdio.h>
#include <locale.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int num, resto, resultado, i;
	 
	printf("Insira o número: ");
	scanf("%d", &num);
	 
	do {	
		num = num / 2;
	} while(num < 1);
	printf("Seu resultado: %d", num);
}


