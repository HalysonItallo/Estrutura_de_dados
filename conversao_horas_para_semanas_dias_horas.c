#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int horas, semanas, dias;
		
	printf("Digite as suas horas: ");
	scanf("%d", &horas);
		
	semanas = horas / 168;
	horas -= semanas * 168;
	dias = horas / 24;
	horas -= dias * 24;
	
	printf("O seu valor em semanas: ");
	printf("%d", semanas);
	printf("\n");
	printf("O seu valor em dias: ");
	printf("%d", dias);
	printf("\n");
	printf("O seu valor em horas: ");
	printf("%d", horas);
	printf("\n");

	
	system("PAUSE");
}
