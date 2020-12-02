#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	int dia_atual, mes_atual, ano_atual, dia_nascimento, mes_nascimento, ano_nascimento, idade_dia, idade_mes, idade_ano;
	printf("Qual o seu dia atual: ");
	scanf("%d", &dia_atual);
	 
	printf("Qual o seu mês atual: ");
	scanf("%d", &mes_atual);
	
	printf("Qual o seu ano atual: ");
	scanf("%d", &ano_atual);
	
	printf("Qual o dia do seu nascimento: ");
	scanf("%d", &dia_nascimento);
	 
	printf("Qual o mês do seu nascimento: ");
	scanf("%d", &mes_nascimento);
	
	printf("Qual o ano do seu nascimento: ");
	scanf("%d", &ano_nascimento);
	
	
	idade_dia = dia_atual - dia_nascimento;
	idade_mes = mes_atual - mes_nascimento;
	idade_ano = ano_atual - ano_nascimento;
	
	if(idade_dia < 0){
		idade_mes -= 1;
	} 
	if(idade_mes < 0){
		idade_ano -= 1;
	}

	printf("%d", idade_ano);

}