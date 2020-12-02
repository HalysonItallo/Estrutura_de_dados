#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	int dia_atual, mes_atual, ano_atual, dia_nascimento, mes_nascimento, ano_nascimento;
	printf("Insira o seu dia atual: ");
	scanf("%d", &dia_atual);
	
	printf("Insira o seu mês atual: ");
	scanf("%d", &mes_atual);
	 
	printf("Insira o seu ano atual: ");
	scanf("%d", &ano_atual);
	 
	printf("\nInsira o seu dia de nascimento: ");
	scanf("%d", &dia_nascimento);
	
	printf("Insira o seu mês nascimento: ");
	scanf("%d", &mes_nascimento);
	 
	printf("Insira o seu ano de nascimento: ");
	scanf("%d", &ano_nascimento);
	 
	int idade_dia = dia_atual - dia_nascimento;
	int idade_mes = mes_atual - mes_nascimento;
	int idade_ano = ano_atual - ano_nascimento;
	
	if(idade_dia < 0){
		idade_dia += 30;
		idade_mes -= 1;		
	}
	if(idade_mes < 0){
		idade_mes += 12;
		idade_ano -= 1;
	}
  printf("dia: %d mês: %d ano: %d",idade_dia, idade_mes, idade_ano);
}

