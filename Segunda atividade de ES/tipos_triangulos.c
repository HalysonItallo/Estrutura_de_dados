#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float a,b,c;
	printf("Insira a medida do lado A do tri�ngulo: ");
	scanf("%f", &a);
	 
	printf("Insira a medida do lado B do tri�ngulo: ");
	scanf("%f", &b);
	
	printf("Insira a medida do lado C do tri�ngulo: ");
	scanf("%f", &c);	
	
	if(a && b && c != 0){
		if( (abs(b-c) < a && a < (b+c)) &&  (abs(a-c) < b && b < (a+c)) && (abs(a-b) < c && c < (a+b))){
			if(a == b && b == c){
					printf("tri�ngulo equil�tero");
			} else if(a == b || b == c || a == c){
					printf("triangulo is�sceles");
			} else{
					printf("triangulo escaleno");
			}
		} else {
				printf("N�o comp�e nenhum tri�ngulo");
		}
	} else {
			printf("N�o comp�e nenhum tri�ngulo");
	}
	
}

