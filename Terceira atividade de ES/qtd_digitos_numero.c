#include <stdio.h>
#include <locale.h>


void main()
{
	setlocale(LC_ALL, "Portuguese");
	int qtd_digitos = 0, numero;
	printf("Insira o número: ");
	scanf("%d", &numero);
	
	if (numero == 0) {
		 qtd_digitos = 1;	
	} else
	   while (numero != 0)
	   {
	       qtd_digitos++;
	       numero = numero / 10;
	   }
	   
	printf("%d\n", qtd_digitos);
}