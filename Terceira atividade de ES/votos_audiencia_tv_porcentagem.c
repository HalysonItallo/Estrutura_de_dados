#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main (){
	setlocale(LC_ALL, "Portuguese");
	int numero_canal = 0, numero_pessoas_assistindo = 0 , total_votos = 0; 
	
	float audiencia_canal_2 = 0, audiencia_canal_4 = 0, 
				audiencia_canal_5 = 0, audiencia_canal_7 = 0,
				audiencia_canal_10 = 0;
	
	while(1){
		
		printf("Qual o canal que você está assistindo: ");
		scanf("%d",&numero_canal);
		
		if(numero_canal == 0){
			break;
		}
			
		printf("Quantas pessoas estão assistindo: ");
		scanf("%d",&numero_pessoas_assistindo);

					
		if(numero_canal == 2){
			audiencia_canal_2 += 1;
		} else if(numero_canal == 4){
			audiencia_canal_4 += 1;
		} else if(numero_canal == 5){
			audiencia_canal_5 += 1;
		} else if(numero_canal == 7){
			audiencia_canal_7 += 1;
		} else if(numero_canal == 10){
			audiencia_canal_10 += 1;
		}else{
			printf("Dígito incorreto");
			system("pause");
		}
		
		total_votos += 1;
		printf("\n");
	}
	
	printf("\nPorcentagem audiência canal 2: %.4f ", (audiencia_canal_2/total_votos)/100);
	printf("\nPorcentagem audiência canal 4: %.4f", (audiencia_canal_4/total_votos)/100);
	printf("\nPorcentagem audiência canal 5: %.4f", (audiencia_canal_5/total_votos)/100);
	printf("\nPorcentagem audiência canal 7: %.4f", (audiencia_canal_7/total_votos)/100);
	printf("\nPorcentagem audiência canal 10: %.4f", (audiencia_canal_10/total_votos)/100);	
}