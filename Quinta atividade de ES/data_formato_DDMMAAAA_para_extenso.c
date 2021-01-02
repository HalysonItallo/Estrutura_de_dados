	#include <stdio.h>
	#include <locale.h>
	#include <stdlib.h>
	#include <string.h>
	
	typedef struct 		
	{  
		int dia, mes, ano;
	} data;
	
	void main(){
		setlocale(LC_ALL, "Portuguese");
		
		data d;
		char *meses[12] = {"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
		
		printf("Qual a a sua data no formato DD/MM/AAAA: ");
		scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);			
		
		if(1 <= d.dia && d.dia <= 31){
			if(1 <= d.mes && d.mes <= 12){
				if(1900<= d.ano && d.ano <= 3000){
					printf("%d de %s %d",d.dia,meses[d.mes-1],d.ano);
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