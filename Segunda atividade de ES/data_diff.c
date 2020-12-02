#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	int hora_inicio, minuto_inicio , hora_termino , minuto_termino ;
	
	printf("Insira a hora de inicio: ");
	scanf("%d", &hora_inicio);
	 
	printf("Insira os minutos de inicio: ");
	scanf("%d", &minuto_inicio);
	
	printf("Insira a hora do fim: ");
	scanf("%d", &hora_termino);
	
	printf("Insira os minutos do fim: ");
	scanf("%d", &minuto_termino);
	 
	int calc_minuto_inicio = minuto_inicio / 60;
  minuto_inicio -= calc_minuto_inicio * 60;
  hora_inicio += calc_minuto_inicio;
  
  int calc_minuto_termino = minuto_termino / 60;
  minuto_termino -= calc_minuto_termino * 60;
  hora_termino += calc_minuto_termino;
	
	int hora_total = hora_termino - hora_inicio;
	int minuto_total = minuto_termino - minuto_inicio;
		 
	if (
		(0 <= hora_inicio && hora_inicio < 24) 
		&& (0 <= hora_termino && hora_termino < 24) 
		&& (0 <= minuto_inicio && hora_inicio <= 60) 
		&& (0 <= minuto_termino && hora_termino <= 60)
	){
		if(hora_total <= 0){
			 hora_total += 24;
		} 
		if (minuto_total >= 0){
			printf("%d:%d", hora_total,minuto_total);
		} else {
				hora_total -= 1;
				minuto_total += 60;
				printf("%d:%d", hora_total,minuto_total);
		}	
	}	else {
		printf("Limite de horas utrapassadas");
	}
        
}


