#include <stdio.h>
#include <locale.h>


void main (){
	setlocale(LC_ALL, "Portuguese");
	float salario = 0, novo_salario = 0, total_salario = 0, total_novo_salario = 0;
	
	
	while(1){
		printf("Digite o seu salário: ");
		scanf("%f", &salario);
		
		if(salario <= 0){
			break;
		}
		
		if(0 < salario && salario < 3000){
			novo_salario = salario + (salario * 25)/100;
		} else if(0 <= salario && salario < 6000){
			novo_salario = salario + (salario * 20)/100;
		} else if(6000 <= salario && salario < 10000){
			novo_salario = salario + (salario * 15)/100;
		} else {
			novo_salario = salario + (salario * 10)/100;
		}
		
		total_salario += salario;
		total_novo_salario += novo_salario;
		
		printf("\nSalário reajustado: %.2f", novo_salario);
		printf("\nTotal salários: %.2f", total_salario);
		printf("\nTotal salários reajustados: %.2f", total_novo_salario);
		printf("\nDiferença dos totais: %.2f",total_novo_salario - total_salario);
		printf("\ns");
		
	}
	
	
	
	
		
	
	
}