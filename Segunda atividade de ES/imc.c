#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float altura, peso, imc;
	printf("Insira a sua altura em M: ");
	scanf("%f", &altura);
	
	printf("Insira o seu peso em Kg: ");
	scanf("%f", &peso);
	 
	imc = peso/pow(altura,2);
	
	if(0 < imc){
		 if(imc < 25){
			printf("Peso normal");
		} else if(25 < imc && imc < 30){
			printf("Obeso");
		} else {
			printf("Obesidade mórbida");
		}		
	} else{
		printf("Valor inválido");
	}
	
}