#include <stdio.h>
#include <locale.h>
#include "HICP.c"

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero = 0;
	
	printf("Digite o n�mero para saber se � primo: ");
	scanf("%d", &numero);

 if (eh_primo(numero))
    printf("%d � um n�mero primo\n", numero);
 else
    printf("%d n�o � um n�mero primo\n", numero);
		
	
	return 0;
}


