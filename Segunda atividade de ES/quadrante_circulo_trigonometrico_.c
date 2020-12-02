#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	int ang;
	printf("Insira o ângulo: ");
	scanf("%d", &ang);
	 
	
	
	if(0 <= ang && ang <= 360){
		if(0 <= ang && ang <= 90){
			printf("Primeiro Quadrante");
		} else if(90 < ang && ang <= 180){
			printf("Segundo Quadrante");
		} else if(180 < ang && ang <= 270){
			printf("Terceiro quadrante");
		} else{
			printf("Quarto Quadrante");
		}
	} else{
		printf("Valor inválido");
	}
}