#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor, num_notas_50, num_notas_20, 
		num_notas_10, num_notas_5, num_notas_2;
		
	printf("Digite o valor para retirar: ");
	scanf("%d0", &valor);
	
	num_notas_50 = valor / 50;
	valor -= num_notas_50 * 50;
	
	num_notas_20 = valor / 20;
	valor -= num_notas_20 * 20;
	
	num_notas_10 = valor / 10;
	valor -= num_notas_10 * 10;
	
	num_notas_5 = valor / 5;
	valor -= num_notas_5 * 5;
	
	num_notas_2 = valor / 2;
	valor -= num_notas_2 * 2;
	
	
	printf("Quantidade de notas de 50 R$: ");
	printf("%d", num_notas_50);
	printf("\n");
	
	printf("Quantidade de notas de 20 R$: ");
	printf("%d", num_notas_20);
	printf("\n");
	
	printf("Quantidade de notas de 10 R$: ");
	printf("%d", num_notas_10);
	printf("\n");
	
	printf("Quantidade de notas de 5 R$: ");
	printf("%d", num_notas_5);
	printf("\n");
	
	printf("Quantidade de notas de 2 R$: ");
	printf("%d", num_notas_2);
	printf("\n");
	
	system("PAUSE");
}