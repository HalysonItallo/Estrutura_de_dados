#include <stdio.h>
#include <locale.h>

void main(){	
	setlocale(LC_ALL, "Portuguese");
	float saldo_total = 0, semana = 0;
	int total_dias = 0;
	
	saldo_total = 3000;
	
	while(saldo_total > 0){	
		if(semana <= 5){
			saldo_total += ((saldo_total * 0.85) / 100);
			saldo_total -= 200;	
		}
		if(semana == 7){
			semana = 0;
			total_dias -= 2;
		}
		
		semana += 1;
		total_dias += 1;
	}	
	
	printf("%d", total_dias);

}


