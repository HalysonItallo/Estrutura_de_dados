#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	char number;
	printf("1 - Domingo \n2 - Segunda \n3 - Terça \n4 - Quarta \n5 - Quinta \n6 - Sexta \n7 - Sábado");
	printf("\nInsira o seu turno: ");
	scanf("%c", &number);
	 
	switch(number) {
	case '1':
		printf("Bom Domingo!!!");
			break;
	case '2':
		printf("Boa Segunda!!!");
		break;
	case '3':
		printf("Boa Terça!!!");
		break;
	case '14':
		printf("Boa Quarta!!!");
			break;
	case '5':
		printf("Boa Quinta!!!");
		break;
	case '6':
		printf("Boa Sexta!!!");
		break;
	case '7':
		printf("Bom Sábado!!!");
		break;
	default:
			printf("Valor Iválido");
			break;
	}
}