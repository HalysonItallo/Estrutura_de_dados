#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;
class No{
	public:
		int mat;
		char nome[23];
		No *prox;
		No(int m,char n[23]){
			mat=m;
			strcpy(nome,n);			
			prox=NULL;
		}
};

class Lista{
	public:
	No *inicio;
	No *fim;

  Lista(){
 		inicio = NULL;
 		fim = NULL;
	}	
		
	void addToFinal(int m, char n[23]){
		No *novo= new No(m,n);
		if (fim==NULL){
			inicio = novo;
			fim = novo;
		}
		else{
			fim->prox=novo;
			fim=novo;
		}
	}
		
			
	int lst_vazia(){
		return (inicio==NULL);
	}
	
		
	void addToInicio(int m,char n[23]){
		No *novo= new No(m,n);
		if (fim==NULL){
			inicio = novo;
			fim = novo;
		}
		else{
			novo->prox = inicio;
			inicio = novo;
		}
	}
		
		
	void mostra(){
		if (lst_vazia()){
			cout<<"\nLista vazia!!!";
		}
		else{
			No *atual = inicio;
			while(atual != NULL){
				cout<<"Matrícula: "<<atual->mat<<endl;
				cout<<"Nome: "<<atual->nome<<endl;
				atual = atual->prox;
			}
		}
	}				


	int remove(int mat){
		No *anterior, *atual;
		anterior = busca(mat-1);
		atual = busca(mat);
		if(atual != NULL) {
			if(atual == inicio){
				inicio = inicio->prox;
			} else if(fim == atual){
				fim = anterior;
				fim->prox = NULL;
			} else {
				anterior->prox=atual->prox;
			}
			free(atual);
			return 1;
		}
		return 0;
	}
	
	
	/*
	int remove(int mat){
		No *anterior, *atual;
		anterior = NULL;
		atual = inicio;
		while(atual != NULL) {
			if(atual->mat==mat){
				if(atual == inicio){
					inicio = inicio->prox;
				} else if(fim == atual){
					fim = anterior;
					fim->prox = NULL;
				} else {
					anterior->prox=atual->prox;
				}
				free(atual);
				return 1;
			}		
			anterior = atual;
			atual = atual->prox;
		}
		return 0;
	}
	*/
		
		// auxiliar no metodo remove, vai 
		//retornar o endereco do atual
		No *busca(int mat){
			No *atual = inicio;
			while(atual != NULL){
				if(atual->mat == mat){
					 return atual;	
				} else{
					atual = atual->prox;
				}
			}
			return NULL;
		}
		
		
		void removeTodos(){
			No *atual=inicio;
			No *proximo=NULL;
			while (atual!=NULL){
					proximo=atual->prox;
					cout<<"\n Apaga:"<<atual->nome;
					free(atual);
					atual=proximo;						
			}
			inicio=atual;
		}
		
	// criar uma nova lista que seja o inverso da primeira
	void crialistainversa(){
		No *atual = inicio;
		Lista *l = new Lista();
		while(atual!=NULL){
			l->addToInicio(atual->mat, atual->nome);
			atual = atual->prox;
		}
		l->mostra();
	}
	
		//inverter a propria lista
	void listainvertida(){
		No *atual = inicio;
		No *anterior = NULL;
		No *proximo = atual->prox;
		if(inicio != NULL){
			while(atual != NULL){
				atual->prox = anterior;
				anterior = atual;
				atual = proximo;
				if(proximo != NULL){
					proximo = proximo->prox;
				}
			}
			inicio = anterior;	
		}
	}
};


int main(){
	setlocale(LC_ALL, "Portuguese");
	Lista *l=new Lista();
	l->addToFinal(1,"Joao");
	l->addToFinal(2,"Gabriela");
	l->addToFinal(3,"Fabiola");
	l->addToInicio(5,"Joana Oliveira");
	l->addToInicio(6,"Cristiano Oliveira");
	//l->remove(2);
	l->mostra();
 	
	l->listainvertida();
	l->mostra();
	
	return 0;
}
