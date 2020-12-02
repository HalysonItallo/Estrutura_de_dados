#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	char sexo;
	printf("F - Feminino \nM - Masculino \nInsira a letra correspondente : ");
	scanf("%c", &sexo);
	 
	switch(sexo){
		case 'F':
			printf("Feminio");
			break;
		case 'M':
			printf("Masculino");
			break;
		default:
			printf("Sexo inválido");
	}
}