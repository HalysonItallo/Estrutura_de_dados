#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtd_numeros;
	printf("Digite a quantidade de n�meros que voc� deseja receber os divisores: ");
	scanf("%d", &qtd_numeros);
	
	int numero, i = 0, j = 1;
	
	for(i; i <= qtd_numeros; i++){
		 	printf("Digite o n�mero desejado: ");
		 	scanf("%d", &numero);
		 	printf("%d\n", numero);
		
		 	for(j; j < numero; j++){
		 		if(numero % j == 0){
						printf("%d � divisor de %d\n", j, numero);	 
				 }
			}
			j = 1;
			system("pause");
			system("cls");
	}
	
}