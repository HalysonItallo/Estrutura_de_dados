#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2;
	int operacao;
	printf("Insira o seu primeiro n�mero: ");
	scanf("%f", &num1);
	 
	printf("Insira o seu segundo n�mero: ");
	scanf("%f", &num2);
	
	printf("1 - Adi��o \n2 - Subtra��o \n3 - Multiplica��o \n4 - Divis�o \n Insira a opera��o desejada: ");
	scanf("%d", &operacao);
	
	switch(operacao){
		case 1:
			printf("O valor da soma: %.2f", (num1+num2));
			break;
		case 2:
			printf("O valor da subtra��o: %.2f", (num1-num2));
			break;
		case 3:
			printf("O valor da multiplica��o: %.2f", (num1*num2));
			break;
		case 4:
			printf("O valor da divis�o: %.2f", (num1/num2));
			break;
		default:
			printf("O valor inv�lido");
			break;
	}
}