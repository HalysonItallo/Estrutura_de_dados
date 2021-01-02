	#include <stdio.h>
	#include <locale.h>
	#include <stdlib.h>
	#include <string.h>
	
	typedef struct 		
	{  
		int hora, minuto, segundo;
	} horas;
	
	void main(){
		setlocale(LC_ALL, "Portuguese");
		
		horas horario;
		printf("Qual o seu horário no formato HH:MM:SS: ");
		scanf("%d:%d:%d", &horario.hora, &horario.minuto, &horario.segundo);			
		
		if(0 <= horario.hora && horario.hora <= 24){
			if(0 <= horario.minuto && horario.minuto <= 60){
				if(0 <= horario.segundo && horario.segundo <= 60){
					printf("%d horas(s), %d minuto(s) e %d segundo(s)",horario.hora,horario.minuto,horario.segundo);
				} else {
					printf("Digite um valor válido");
				}
			} else {
				printf("Digite um valor válido");
			}
		} else{
			printf("Digite um valor válido");
		}
	}