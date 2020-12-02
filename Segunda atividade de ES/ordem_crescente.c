#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2, num3;
	printf("Insira o seu primeiro número: ");
	scanf("%f", &num1);
	 
	printf("Insira o seu segundo número: ");
	scanf("%f", &num2);
	
	printf("Insira o seu terceiro número: ");
	scanf("%f", &num3);
	

	if(num1 < num2 && num1 < num3){
		printf("%.2f", num1);
		if(num2 < num3){
			printf(" %.2f", num2);
			printf(" %.2f", num3);
		} else {
			printf(" %.2f", num3);
			printf(" %.2f", num2);
		}
	} else if(num2 < num1 && num2 < num3){
		printf("%.2f", num2);
		if(num1 < num3){
			printf(" %.2f", num1);
			printf(" %.2f", num3);
		} else {
			printf(" %.2f", num3);
			printf(" %.2f", num1);
		}
	} else if(num3 < num1 && num3 < num2) {
			printf("%.2f", num3);
			if(num1 < num2){
			printf(" %.2f", num1);
			printf(" %.2f", num2);
		} else {
			printf(" %.2f", num2);
			printf(" %.2f", num1);
		}
	}


}