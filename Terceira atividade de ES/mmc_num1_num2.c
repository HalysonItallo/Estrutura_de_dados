#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, mmc, aux, i;
	 
	printf("Insira o primeiro n�mero: ");
	scanf("%d", &num1);
	 
	printf("Insira o segundo n�mero: ");
	scanf("%d", &num2);
	
	for(i = 2; i <= num2; i++) {
			aux = num1 * i;
	    if((aux % num2) == 0) {
	        mmc = aux;
	        i = num2 + 1;
   		}
	}
	printf("Seu MMC: %d", mmc);
}