#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	printf("Digite o valor do número 1: ");
	scanf("%d", &num1);
	printf("Digite o valor do número 2: ");
	scanf("%d", &num2);
	
	printf("Quociente: ");
	printf("%d", num1/num2);
	printf("\n");
	
	printf("Resto: ");
	printf("%d", num1%num2);
	printf("\n");
	
	system("PAUSE");
}
