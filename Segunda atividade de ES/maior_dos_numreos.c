#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2, num3;
	printf("Insira o seu primeiro n�mero: ");
	scanf("%f", &num1);
	 
	printf("Insira o seu segundo n�mero: ");
	scanf("%f", &num2);
	
	printf("Insira o seu terceiro n�mero: ");
	scanf("%f", &num3);
	
	
	if(num1 > num2 && num1 > num3){
		printf("%.2f � o maior", num1);
	} else if(num2 > num1 && num2 > num3){
		printf("%.2f � o maior", num2);
	} else{
		printf("%.2f � o maior", num3);
	}

}