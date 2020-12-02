#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2;
	int operacao;
	printf("Insira o seu primeiro número: ");
	scanf("%f", &num1);
	 
	printf("Insira o seu segundo número: ");
	scanf("%f", &num2);
	
	printf("1 - Adição \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \n Insira a operação desejada: ");
	scanf("%d", &operacao);
	
	switch(operacao){
		case 1:
			printf("O valor da soma: %.2f", (num1+num2));
			break;
		case 2:
			printf("O valor da subtração: %.2f", (num1-num2));
			break;
		case 3:
			printf("O valor da multiplicação: %.2f", (num1*num2));
			break;
		case 4:
			printf("O valor da divisão: %.2f", (num1/num2));
			break;
		default:
			printf("O valor inválido");
			break;
	}
}