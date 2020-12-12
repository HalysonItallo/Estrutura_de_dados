#include <stdio.h>
#include <locale.h>


void main (){
	setlocale(LC_ALL, "Portuguese");
	int A0 = 0, N = 0, razao = 0, aux_numero = 0;
	
	printf("Digite o A0 dá progressão aritmética: ");
	scanf("%d", &A0);
	
	printf("Digite o limite da progressão aritmética: ");
	scanf("%d", &N);
	
	printf("Digite o Razão dá progressão aritmética: ");
	scanf("%d", &razao);
	
	if ((N < A0) || (razao <= 1)){
		printf("Por Favor digite um valor correto.");	
	} else{
		aux_numero = A0;
    while(aux_numero < (N - razao)){
			aux_numero += razao;
      printf("%d\n",aux_numero);
		}
	}	
}










