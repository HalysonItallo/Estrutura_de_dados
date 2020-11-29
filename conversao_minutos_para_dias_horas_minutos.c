#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int minutos, dias, horas;
		
	printf("Digite os seus minutos: ");
	scanf("%d", &minutos);
		
	dias = minutos / 1440;
	minutos -= dias * 1440;
	horas = minutos / 60;
	minutos -= horas * 60;
	
	printf("O seu valor em dias: ");
	printf("%d", dias);
	printf("\n");
	printf("O seu valor em horas: ");
	printf("%d", horas);
	printf("\n");
	printf("O seu valor em minutos: ");
	printf("%d", minutos);
	printf("\n");

	
	system("PAUSE");
}