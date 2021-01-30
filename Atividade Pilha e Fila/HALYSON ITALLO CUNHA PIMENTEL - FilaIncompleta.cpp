#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No{
	public:
		char nome;
		No *prox;
		No(char n){
			nome = n;
			prox = NULL;
		}
};

class Fila{
	public:
		No *inicio;
		No *fim;
		int tam;
		
		Fila(){
			inicio = NULL;
			fim = NULL;
			tam = 0;
		}
		
		void inserir(char n){
			No *novo = new No(n);
			if(inicio == NULL){
				inicio = novo;
				fim = novo;
			}else{
				fim->prox = novo;
				fim = novo;
			}
			tam++;
		}
		
		char apagar(){
			No *temp;
			char nome;
			if(inicio != NULL){
				temp = inicio;
				nome = inicio->nome;
				inicio = inicio->prox;
				free(temp);
				tam--;
			}
			return nome;
		}
		
		bool isEmpty(){
			return (inicio == NULL);
		}
	
    void apagaTodos(){
    	while (!isEmpty())
    		apagar();
    		tam--;
		}
		
		void mostrar(){
			if(!isEmpty()){
				cout << inicio->nome;	
			} else {
			 	cout << "Insira o valor antes na pilha";
			}
	 	}
	 	
	 	char frente(){
	 		char nome;
			if(!isEmpty()){
				nome = inicio->nome;
			 }
			 return nome;
		 }
	 	
	 	int tamanho(){
			 return tam;
		 }
		
	// Nao aconselhavel para PILHAS	
	//	void showAll(){
	//		No *atual = topo;
	//		while(atual != NULL){
	//			cout << "End: " << &atual << " // Valor: " << atual->nome << " // Prox: " << atual->prox << endl;
	//			atual = atual->prox;
	//		}
	//	}
};


class Pilha{
	public:
		Fila *normal;
	 	Fila *inverso;
	 	
	 	Pilha(){
			 normal = new Fila();
			 inverso = new Fila();
		 }
 	
	 	void empilhar(char n){
	 		normal->inserir(n);
		}
		
		char desempilhar(){
			char temp = ' ';
			if(normal->tamanho() != 0){
				inverter(normal, inverso, 1);
				temp = normal->apagar();
				inverter(inverso, normal, 0);
			}
		 	return temp;
		}
		
		void inverter(Fila *origem, Fila *destino, int parada){
			while(origem->tamanho() > parada){
					destino->inserir(origem->apagar());
				}
		}
};


int main(){
	Pilha *p = new Pilha();
	p->empilhar('A');
	p->empilhar('B');
 	p->empilhar('C');
 	cout << p->desempilhar();
 	p->empilhar('L');
 	cout << p->desempilhar();
 	cout << p->desempilhar();
	cout << p->desempilhar();
	cout << p->desempilhar();
	return 0;
}
