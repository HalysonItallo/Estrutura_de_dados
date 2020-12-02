#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	int dia1, mes1, ano1, dia2, mes2, ano2;
	printf("Insira o seu primeiro dia: ");
	scanf("%d", &dia1);
	
	printf("Insira o seu primeiro mês: ");
	scanf("%d", &mes1);
	 
	printf("Insira o seu primeiro ano: ");
	scanf("%d", &ano1);
	 
	printf("\nInsira o seu segundo dia: ");
	scanf("%d", &dia2);
	
	printf("Insira o seu segundo mês: ");
	scanf("%d", &mes2);
	 
	printf("Insira o seu segundo ano: ");
	scanf("%d", &ano2);
	 
	 	
	if((0 < dia1 && dia1 <= 31) && (0 < dia2 && dia2 <= 31)){
		if((0 < mes1 && mes1 <= 12) && (0 < mes2 && mes2 <= 12)){
			if((1000 < ano1 && ano1 < 3000) && (1000 < ano2 && ano2 < 3000)){
				if (ano1 > ano2){
					printf("Data 1 é mais recente que a data 2");
				} else if(ano2 > ano1){
					printf("Data 2 é mais recente que a data 1");
				} else{
					if(mes1 > mes2){
						printf("Data 1 é mais recente que a data 2");
					} else if(mes2 > mes1){
						printf("Data 2 é mais recente que a data 1");
					} else{
						if(dia1 > dia2){
							printf("Data 1 é mais recente que a data 2");
						} else if(dia2 > dia1){
							printf("Data 2 é mais recente que a data 1");
						} else {
							printf("Datas iguais");
						}
					}
				}
			} else{
				printf("Data inválida");
			}
		} else {
			printf("Data inválida");
		}
	} else {
		printf("Data inválida");
	}
}