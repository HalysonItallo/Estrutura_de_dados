#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float produto1, produto2, produto3;
	printf("Insira o seu primeiro produto: ");
	scanf("%f", &produto1);
	 
	printf("Insira o seu segundo produto: ");
	scanf("%f", &produto2);
	
	printf("Insira o seu terceiro produto: ");
	scanf("%f", &produto3);
	
	
	if(produto1 < produto2 && produto1 < produto3){
		printf("É o valor menor entre os produtos: %.2f ", produto1);
	} else if(produto2 < produto1 && produto2 < produto3){
		printf("É o valor menor entre os produtos: %.2f ", produto2);
	} else if(produto3 < produto1 && produto3 < produto1){
		printf("É o valor menor entre os produtos: %.2f ", produto3);
	} else {
		printf("Todos os produtos têm os mesmo preço");
	}
}