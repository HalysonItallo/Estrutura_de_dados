#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtd_numeros = 0, entrada_numero = 0, numero_maior = 0;
	

	printf("A quantidade de n�meros que sua lista tem: ");
	scanf("%d", &qtd_numeros);
		
	while(qtd_numeros > 0)
	{
		printf("\nDigite o seu n�mero: ");
	  scanf("%d", &entrada_numero);
	  
	  if(numero_maior < entrada_numero){
			numero_maior = entrada_numero;
		}
  	
  	qtd_numeros--;
	}
	
	printf("\nN�mero maior de todos: %d", numero_maior);
	
}


