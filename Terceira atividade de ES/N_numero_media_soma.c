#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtd_numeros = 0, entrada_numero = 0, total_numeros = 0, total_loop = 0;
	

	printf("A quantidade de números que sua lista tem: ");
	scanf("%d", &qtd_numeros);
		
	while(qtd_numeros > 0)
	{
		printf("\nDigite o seu número: ");
	  scanf("%d", &entrada_numero);
	  
	  total_numeros += entrada_numero;
	  total_loop++;
  	
  	qtd_numeros--;
	}
	
	printf("Soma -> %d", total_numeros);
	printf("\nMédia -> %d", total_numeros/total_loop);
}


