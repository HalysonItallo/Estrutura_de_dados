#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int fabrica, consumidor;
		
	printf("Digite o custo de fábrica: ");
	scanf("%d", &fabrica);
	
	
	consumidor = fabrica;
	consumidor += (fabrica * 28) / 100;
	consumidor += (fabrica * 45) / 100;
	
	printf("O custo ao consumidor: ");
	printf("%d", consumidor);
	printf("\n");
	
	
	
	system("PAUSE");
}