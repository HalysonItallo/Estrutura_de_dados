#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	char turno;
	printf("M - Matutino \nV - Vespertino \nN - Noturno");
	printf("\nInsira o seu turno: ");
	scanf("%c", &turno);
	 
	switch(turno) {
	case 'M':
		printf("Bom Dia!!!");
			break;
	case 'V':
		printf("Boa Tarde!!!");
		break;
	case 'N':
		printf("Boa Noite!!!");
		break;
	default:
			printf("Valor Iválido");
			break;
	}
}