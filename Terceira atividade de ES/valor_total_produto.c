#include <stdio.h>
#include <locale.h>
#include <string.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	char produto[100]; 
	float preco, valor, preco_total;
	int quantidade_produto;
	 
	 while(1){
		printf("Qual o nome do seu produto: ");
		scanf("%s", produto);
		
		if(strcmp(produto, "FIM") == 0){
			break;
		}
		
		printf("Qual o preço do seu produto: ");
		scanf("%f",&preco);
		
		printf("Qual a quantidade do produto comprado: ");
		scanf("%d", &quantidade_produto); 
	 
	  
	  preco_total = preco * quantidade_produto;
	  if(quantidade_produto <= 10){
			valor = preco_total; 
		} else if(11 < quantidade_produto && quantidade_produto <= 20){
			valor = preco_total - (preco_total * 10) / 100;
		} else if(21 < quantidade_produto && quantidade_produto <= 50){
			valor = preco_total - (preco_total * 20) / 100;
		} else {
			valor = preco_total - (preco_total * 50) / 100;
		}
	 	
	 	
	 	printf("\nNome -> %s", produto);
	 	printf("\nPreço Total -> %.2f\n\n", valor);

	 }
	 
	

}


