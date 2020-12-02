#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2;
	printf("Insira o seu primeiro número: ");
	scanf("%f", &num1);
	 
	printf("Insira o seu segundo número: ");
	scanf("%f", &num2);
	
	if(num1 > num2){
		printf("%.2f é maior que o %.2f", num1, num2);
	} else{
		printf("%.2f é menor que o %.2f", num1, num2);
	}
}