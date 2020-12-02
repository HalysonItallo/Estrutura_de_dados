#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float nota1, nota2;
	printf("Insira a sua primeira nota: ");
	scanf("%f", &nota1);
	 
	printf("Insira a sua segunda nota: ");
	scanf("%f", &nota2);
	
	
	float media = (nota1 + nota2) / 2; 
	if(9 < media && media < 10){
		printf("Primeira nota: %.2f \nSegunda nota: %.2f", nota1, nota2);
		printf("\nMedia: %.2f", media);
		printf("\nA");
		printf("\nAprovado");
	} else if(7.5 < media && media < 9){
		printf("Primeira nota: %.2f \nSegunda nota: %.2f", nota1, nota2);
		printf("\nMedia: %.2f", media);
		printf("\nB");
		printf("\nAprovado");
	} else if(6 < media && media < 7.5){
		printf("Primeira nota: %.2f \nSegunda nota: %.2f", nota1, nota2);
		printf("\nMedia: %.2f", media);
		printf("\nC");
		printf("\nAprovado");
	} else if(4 < media && media < 6){
		printf("Primeira nota: %.2f \nSegunda nota: %.2f", nota1, nota2);
		printf("\nMedia: %.2f", media);
		printf("\D");
		printf("\nReprovado");
	} else if(0 < media && media < 4){
		printf("Primeira nota: %.2f \nSegunda nota: %.2f", nota1, nota2);
		printf("\nMedia: %.2f", media);
		printf("\E");
		printf("\nReprovado");
	}
}