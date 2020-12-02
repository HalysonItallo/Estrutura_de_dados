#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float nota1, nota2, media;
	printf("Insira a sua primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Insira a sua segunda nota: ");
	scanf("%f", &nota2);
	 
	media = (nota1+nota2)/2;
	
	if(media >= 7.0){
		printf("Aprovado");
	} else{
		float nota_final, media_final;
		printf("Insira a nota do seu exame final: ");
		scanf("%f", &nota_final);
		
		media_final = (media+nota_final) / 2.0;
		
		if(media_final >= 6.0){
			printf("Aprovado");
		} else{
				printf("Reprovado");
		}
	} 
	
}