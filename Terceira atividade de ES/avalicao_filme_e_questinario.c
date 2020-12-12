#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main (){
	setlocale(LC_ALL, "Portuguese");
	int idade = 0, opiniao_filme = 0, 
			total_idade = 0, total_votos = 0;
	float	total_votos_bons = 0;
	
	while(1){
		printf("Qual a sua idade: ");
		scanf("%d",&idade);
		
		if(idade == -1){
			break;
		}
		
		printf("\n1 - ótimo \n2 - bom \n3 - regular \n4 - péssimo\n");
		printf("Qual a sua opinião sobre o filme: ");
		scanf("%d",&opiniao_filme);
					
		if(opiniao_filme == 2){
			total_votos_bons += 1;
		} 
		if(opiniao_filme != 1 && opiniao_filme != 2 && opiniao_filme != 3 && opiniao_filme != 4 && opiniao_filme != 5 ){
			printf("Dígito incorreto");
			system("pause");
		}
		
		total_idade += idade;
		total_votos += 1;
		printf("\n");
	}
	
	printf("\nMédia da idade: %d ", (total_idade/total_votos));
	printf("\nA quantidade de pessoas que respondeu ao questionário: %d", (total_votos));
	printf("\nA porcentagem de pessoas que respondeu bom: %.4f", (total_votos_bons/total_votos)/100);

}