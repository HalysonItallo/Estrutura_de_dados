#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


 
 void main(){
	setlocale(LC_ALL, "Portuguese");
	int qtd_funcionarios = 0, cod_funcionario = 0, 
			i, horas_trabalhadas = 0, qtd_dependentes = 0;
			
	float total = 0, desconto_inss = 0, desconto_ir = 0; 
	
	printf("Digite a quantidade de funcionários: ");
	scanf("%d", &qtd_funcionarios);
	
		
	for(i = 0; i < qtd_funcionarios; i++){
		printf("\nInsira o de código de cada funcionário: ");
		scanf("%d", &cod_funcionario);
		
		printf("Insira as horas trabalhadas: ");
		scanf("%d", &horas_trabalhadas);
		
		printf("Insira a quantidade de dependentes: ");
		scanf("%d", &qtd_dependentes);
		
		total = (12 * horas_trabalhadas) + (40 * qtd_dependentes);
		desconto_inss = (total * 8.5) / 100;
		desconto_ir = (total * 5) / 100;
		
		printf("\nDesconto INSS -> %.2f", desconto_inss);
		printf("\nDesconto IR -> %.2f", desconto_ir);
		printf("\nValor líquido -> %.2f\n\n", (total - (desconto_inss + desconto_ir)));
		
	}
}

