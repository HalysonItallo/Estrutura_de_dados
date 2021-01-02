#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

#define TAM 2

typedef struct{
	int matricula[100];
	char nome[100];
	char data_nascimento[100];
	char endereco[100];
} Aluno[TAM];	

typedef struct{
	int matricula_aluno[100];
	char disciplina[100];
	float nota1[100];
	float nota2[100];
	float nota3[100];
} Notas[TAM];

void incluir_aluno(Aluno *aluno);
void exibir_alunos(Aluno aluno);
void consultar_aluno(Aluno aluno);
void incluir_nota(Notas *nota, Aluno aluno);
void exibir_notas(Notas nota);
void consultar_notas(Notas nota);


int main(){
    setlocale(LC_ALL, "Portuguese");
		  
		Aluno aluno;
		Notas nota;
		memset(&aluno, 0, sizeof(Aluno));	
    memset(&nota, 0, sizeof(Notas));
    
    int escolha = -1;
    while(escolha != 0){
			printf("*** Mini Sistema ***\n1 - Inserir valores aluno\n2 - Mostrar todos os valores de aluno");
    	printf("\n3 - Buscar aluno por matrícula\n4 - Excluir alunos e a notas");
    	printf("\n5 - Inserir valores nota\n6 - Mostrar todos os valores de nota");
    	printf("\n7 - Buscar notas pela matrícula do aluno\n8 - Excluir notas");
			printf("\n0 - Sair\n\nOpção >>> ");
	    scanf("%d", &escolha);
	    getchar();
	    switch(escolha) {
				case 1:
					incluir_aluno(&aluno);
					break;
				case 2:
					exibir_alunos(aluno);
					break;
				case 3:
					consultar_aluno(aluno);
					break;
				case 4:
					memset(&aluno, 0, sizeof(Aluno));
					memset(&nota, 0, sizeof(Notas));
					printf("\nExclusão de alunos e notas com sucesso!!!\n");
					break;
				case 5:
					incluir_nota(&nota, aluno);
					break;
				case 6:
					exibir_notas(nota);
					break;
				case 7:
					consultar_notas(nota);
					break;
				case 8:
					memset(&nota, 0, sizeof(Notas));
					printf("\nExclusão de notas com sucesso!!!\n");
					break;
				default:
					printf("Valor inválido");
					break;
			}	
		}
		return 0;
}

void incluir_aluno(Aluno *aluno){
  int i, j = 0, aux_matricula = 0, k = 0;
  for (i=0; i < TAM; i++){		
  	
		printf("\nQual o seu nome: ");
   	gets((*aluno)[i].nome); 

		printf("Qual a sua data de nascimento no formato DD/MM/AAAA: ");
    gets((*aluno)[i].data_nascimento);   
    
		printf("Qual o seu endereço: ");
    gets ((*aluno)[i].endereco);
		
		while(1){
			printf("Qual a sua matrícula: ");
			scanf("%d", &aux_matricula);
			for(j = 0; j < TAM; j++){
				 if(aux_matricula == (*aluno)[j].matricula[j]){
					k = -1;
					printf("\nDigite sua matrícula novamente(não pode haver 2 matrículas iguais)\n"); 
					break;
				} else{
					k = 1;
				}	
			}
			if(k == 1){
				(*aluno)[i].matricula[i] = aux_matricula; 
				printf("\nCadasto realizado com sucesso!!!\n");
				break;
			} else if(k == -1){
				k = 0;
			}
		} 
    getchar();
  }    
}


void exibir_alunos(Aluno aluno) {
	int i;
	for (i=0; i < TAM; i++) {
		if(aluno[i].matricula[i] != 0 && strcmp(aluno[i].nome, "") != 0){
			printf ("\nMatrícula -> %d\n",aluno[i].matricula[i]);
			printf ("Nome -> %s\n",aluno[i].nome);
			printf ("Data de nascimento -> %s\n",aluno[i].data_nascimento);
			printf ("Endereço -> %s\n",aluno[i].endereco);	
		} else {
			printf("\nDados não encontrados");
			break;
		}
	}
}


void consultar_aluno(Aluno aluno) {
	int i, matricula = 0;
	printf("\nQual a matrícula que você quer buscar: ");
	scanf("%d", &matricula);
	for (i=0; i < TAM; i++) {
		if(matricula == aluno[i].matricula[i]){
			printf ("Matrícula -> %d\n",aluno[i].matricula[i]);
			printf ("Nome -> %s\n",aluno[i].nome);
			printf ("Data de nascimento -> %s\n",aluno[i].data_nascimento);
			printf ("Endereço -> %s\n",aluno[i].endereco);
			getchar();
			break;	
		} else {
			printf("\nDados não encontrados");
		}
	}
}



void incluir_nota(Notas *nota, Aluno aluno){
  int i, matricula = -1, k = 0;
  for (i=0; i < TAM; i++){		
  	if(aluno[i].matricula[i] != 0 && strcmp(aluno[i].nome, "") != 0){
			while(1){
				printf("\nQual a matrícula do aluno: ");
				scanf("%d", &matricula);
				for (i=0; i < TAM; i++) {
					if(matricula == aluno[i].matricula[i]){
						k = 1;
						break;
					} else{
						k = -1;
					}
				}
				if(k == -1){
					printf("\nInforme um valor válido\n");
					k = 0;
				} else if (k == 1){
					(*nota)[i].matricula_aluno[i] = matricula;
					break;
				}
			}
			
			getchar();
			
			printf("Qual a disciplina: ");
	   	gets((*nota)[i].disciplina); 
	
			printf("A primeira nota: ");
	    scanf("%f", &(*nota)[i].nota1[i]);   
			
			printf("A segunda nota: ");
	    scanf("%f", &(*nota)[i].nota2[i]);    
			
			printf("A terceira nota: ");
	    scanf("%f", &(*nota)[i].nota3[i]);
	    
	    getchar();
		}else{
			printf("\nVocê precisa cadastrar antes um aluno\n\n");
			break;
  	} 
	}   
}

void exibir_notas(Notas nota) {
	int i;
	for (i=0; i < TAM; i++) {
		if(nota[i].matricula_aluno[i] != 0 && strcmp(nota[i].disciplina, "") != 0){
			printf ("\nMatrícula do aluno -> %d\n",nota[i].matricula_aluno[i]);
			printf ("Disciplina -> %s\n",nota[i].disciplina);
			printf ("Nota1 -> %.2f\n", nota[i].nota1[i]);
			printf ("Nota2 -> %.2f\n", nota[i].nota2[i]);
			printf ("Nota3 -> %.2f\n\n", nota[i].nota3[i]);	
			break;
		} else {
			printf("\nDados não encontrados");
			break;
		}
	}
}

void consultar_notas(Notas nota) {
	int i, matricula = 0;
	printf("\nQual a matrícula que você quer buscar para as notas: ");
	scanf("%d", &matricula);
	for (i=0; i < TAM; i++) {
		if(matricula == nota[i].matricula_aluno[i]){
			printf ("\nMatrícula do aluno -> %d\n",nota[i].matricula_aluno[i]);
			printf ("Disciplina -> %s\n",nota[i].disciplina);
			printf ("Nota1 -> %.2f\n",nota[i].nota1[i]);
			printf ("Nota2 -> %.2f\n",nota[i].nota2[i]);
			printf ("Nota3 -> %.2f\n\n",nota[i].nota3[i]);
			getchar();	
			break;
		} else {
			printf("\nDados não encontrados");
			break;
		}
	}
}