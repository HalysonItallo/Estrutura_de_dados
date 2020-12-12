#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 
 void main(){
	setlocale(LC_ALL, "Portuguese");
	int qtd_habitantes = 0, qtd_filhos = 0, 
			total_qtd_filhos = 0, i, porcentagem = 0;
	
	float salario = 0, total_salario = 0, 
				media_salario = 0, media_qtd_filhos = 0,
				calc_porcentagem = 0;
			 
	
	printf("Digite a quantidade de habitantes: ");
	scanf("%d", &qtd_habitantes);
	
		
	for(i = 0; i < qtd_habitantes; i++){
		printf("\nInsira o seu salário: ");
		scanf("%f", &salario);
		
		printf("Insira a quantidade de filhos que você tem: ");
		scanf("%d", &qtd_filhos);
		
		total_salario += salario;
		total_qtd_filhos += qtd_filhos;
		
		if(salario < 1000){
			porcentagem++;
		}
	}
	media_salario = (total_salario/qtd_habitantes); 
	media_qtd_filhos = (total_qtd_filhos/qtd_habitantes);
	calc_porcentagem = (porcentagem / qtd_habitantes) / 100;
	
	printf("\nMédia salário -> %.2f", media_salario);
	printf("\nMédia de números de filhos -> %.2f", media_qtd_filhos);
	printf("\nPercentual de pessoas com salário de até R$ 1.000,00 -> %.2f", calc_porcentagem);
}

