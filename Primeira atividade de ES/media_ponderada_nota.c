#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, 
		peso1, peso2, peso3, media_ponderada, soma;
		
		
	printf("Digite a sua primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite o peso da primeira nota: ");
	scanf("%f", &peso1);
	
	printf("Digite a sua segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite o peso da segunda nota: ");
	scanf("%f", &peso2);
	
	printf("Digite a sua terceira nota: ");
	scanf("%f", &nota3);
	
	printf("Digite o peso da terceira nota: ");
	scanf("%f", &peso3);
	
	soma = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3);
	media_ponderada = soma / (peso1+peso2+peso3);
	
	printf("Sua média ponderada: ");
	printf("%f", media_ponderada);
	printf("\n");
	
	
	
	system("PAUSE");
}
