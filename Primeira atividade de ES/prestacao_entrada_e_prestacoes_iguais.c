#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor, result_entrada, result_prestacao;
	printf("Digite o valor de sua compra: ");
	scanf("%d", &valor);
	
	result_prestacao =  valor/3 ;
	result_entrada = (result_prestacao + valor%3);
	
	
	printf("O valor de entrada: ");
	printf("%d",	result_entrada);
	printf("\n");
	
	printf("Os dois valores de prestações: ");
	printf("%d",  result_prestacao);
	printf("\n");
	
	system("PAUSE");
}
