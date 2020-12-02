#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	int dia, mes, ano;
	printf("Insira o seu dia atual: ");
	scanf("%d", &dia);
	
	printf("Insira o seu mês atual: ");
	scanf("%d", &mes);
	 
	printf("Insira o seu ano atual: ");
	scanf("%d", &ano);
	 
	 	
	if(0 < dia <= 31){
		if(0 < mes <= 12){
			if(1000 < ano < 3000){
				printf("Data válida");
			}
		}
	}
}