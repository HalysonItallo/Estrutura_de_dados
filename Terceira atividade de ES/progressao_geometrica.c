#include <stdio.h>
#include <locale.h>


void main (){
	setlocale(LC_ALL, "Portuguese");
	int A0 = 0, N = 0, razao = 0, aux_numero = 0;
	
	printf("Digite o A0 d� progress�o geom�trica: ");
	scanf("%d", &A0);
	
	printf("Digite o limite da progress�o geom�trica: ");
	scanf("%d", &N);
	
	printf("Digite o Raz�o d� progress�o geom�trica: ");
	scanf("%d", &razao);
	
	if (A0 <= 0 || N <= A0){
		printf("Por Favor digite um valor correto.");		
	} else{
		aux_numero = A0;
    while(aux_numero < N / razao){
		  aux_numero = aux_numero * razao;
      printf("%d\n",aux_numero);
		}      
	} 
	
	
}









