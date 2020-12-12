#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main (){
	setlocale(LC_ALL, "Portuguese");
	int opiniao = 0, total_votos = 0; 
	float serra_votos = 0, 
	dilma_votos, 
	ciro_votos = 0,
	outros_votos = 0,
	indeciso_votos = 0,
	nulo_votos = 0;
	
	while(1){
		printf("Serra -> 45 \nDilma -> 13 \nCiro Gomes -> 23 \nIndeciso -> 99 \nOutros -> 98 \nNulo/Branco -> 0 \nMostrar resultado -> -1\n");
		printf("Qual a sua opinião: ");
		scanf("%d",&opiniao);
		
		if(opiniao == 45){
			serra_votos += 1;
		} else if(opiniao == 13){
			dilma_votos += 1;
		} else if(opiniao == 23){
			ciro_votos += 1;
		} else if(opiniao == 99){
			indeciso_votos += 1;
		} else if(opiniao == 98){
			outros_votos += 1;
		} else if(opiniao == 0){
			nulo_votos += 1;
		} else if(opiniao == -1){
			break;
		} else {
				system("pause");
		}
		total_votos += 1;
		printf("\n");
	}
	
	printf("\nPorcentagem Serra: %.4f ", (serra_votos/total_votos)/100);
	printf("\nPorcentagem Dilma: %.4f", (dilma_votos/total_votos)/100);
	printf("\nPorcentagem Ciro Gomes: %.4f", (ciro_votos/total_votos)/100);
	printf("\nPorcentagem Outros: %.4f", (outros_votos/total_votos)/100);
	printf("\nPorcentagem Indecisão: %.4f", (indeciso_votos/total_votos)/100);
	printf("\nPorcentagem Nulos/Brancos: %.4f", (nulo_votos/total_votos)/100);
	printf("\nTotal de entrevistados: %d", total_votos);
	
	
	if( ((((serra_votos/total_votos) /100 ) / 2) <= dilma_votos) || ((((serra_votos/total_votos)/100) / 2) <= ciro_votos) || ((((serra_votos/total_votos)/100) / 2) <= outros_votos) ){
		printf("\nPode haver segundo turno\n");
	} else if( ((((dilma_votos/total_votos) /100 ) / 2) <= serra_votos) || ((((dilma_votos/total_votos)/100) / 2) <= ciro_votos) || ((((dilma_votos/total_votos)/100) / 2) <= outros_votos) ){
		printf("\nPode haver segundo turno\n");
	} else if(((((ciro_votos/total_votos) /100 ) / 2) <= serra_votos) || ((((ciro_votos/total_votos)/100) / 2) <= dilma_votos) || ((((ciro_votos/total_votos)/100) / 2) <= outros_votos) ){
		printf("\nPode haver segundo turno\n");
	} else if( ((((outros_votos/total_votos) /100 ) / 2) <= serra_votos) || ((((outros_votos/total_votos)/100) / 2) <= ciro_votos) || ((((outros_votos/total_votos)/100) / 2) <= dilma_votos) ){
		printf("\nPode haver segundo turno\n");
	} else {
		printf("\nNão pode haver segundo turno\n");
	}
	
}