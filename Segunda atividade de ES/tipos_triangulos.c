#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float a,b,c;
	printf("Insira a medida do lado A do triângulo: ");
	scanf("%f", &a);
	 
	printf("Insira a medida do lado B do triângulo: ");
	scanf("%f", &b);
	
	printf("Insira a medida do lado C do triângulo: ");
	scanf("%f", &c);	
	
	if(a && b && c != 0){
		if( (abs(b-c) < a && a < (b+c)) &&  (abs(a-c) < b && b < (a+c)) && (abs(a-b) < c && c < (a+b))){
			if(a == b && b == c){
					printf("triângulo equilátero");
			} else if(a == b || b == c || a == c){
					printf("triangulo isósceles");
			} else{
					printf("triangulo escaleno");
			}
		} else {
				printf("Não compõe nenhum triângulo");
		}
	} else {
			printf("Não compõe nenhum triângulo");
	}
	
}

