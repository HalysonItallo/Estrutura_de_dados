#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main()
{
	setlocale(LC_ALL, "Portuguese");
	int matricula, nota1, nota2, nota3, 
			qtd_turma = 0, media_final, 
			qtd_aprovados = 0, qtd_reprovados = 0;

	while(1)
	{
		qtd_turma += 1;
		
		printf("Qual a sua matrícula: ");
		scanf("%d", &matricula);
		
		if(matricula == 0){
			qtd_turma -= 1;
			break;
		}
		
		printf("Qual a sua primeira nota: ");
		scanf("%d", &nota1);
		
		printf("Qual a sua segunda nota: ");
		scanf("%d", &nota2);
		
		printf("Qual a sua terceira nota: ");
		scanf("%d", &nota3);
		
		printf("\n");
		media_final = ((2*nota1) + (3*nota2) + (5*nota3)) / 10;
		
		if(media_final >= 7){
			qtd_aprovados += 1;
		} else{
				qtd_reprovados += 1;
		}
	}
	printf("\nTotal aprovado: %d", qtd_aprovados);
	printf("\nTotal reprovados: %d", qtd_reprovados);
	printf("\nTotal de alunos: %d", qtd_turma);

}