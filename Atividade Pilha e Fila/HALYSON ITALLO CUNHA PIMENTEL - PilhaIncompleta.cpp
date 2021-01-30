#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>


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

class Pilha{
	public:
		No *topo;
		int tam;
		
		Pilha(){
			topo = NULL;
			tam = 0;
		}
		
		void push(char n){
			No *temp; 
			No *novo = new No(n);
			if(topo == NULL){
				topo = novo;
			} else {
				temp = topo;
				topo = novo;
				topo->prox = temp;
			}
			tam++;
		}
		
		char pop(){
			No *temp;
			char nome;
			if(topo != NULL){
				temp = topo;
				nome = topo->nome;
				topo = topo->prox;
				free(temp);
				tam--;
			}
			return nome;
		}
		
		int isEmpty(){
			return(topo == NULL);
		}
		
		void mostrar(){
			if(!isEmpty()){
				cout << topo->nome;	
			} else {
				cout << "Insira o valor antes na pilha";
			}
		}
		
		int tamanho(){
			return tam;
		}
	
};

class Fila 
{
	public:
		Pilha *normal;
	 	Pilha *inverso;
	 	
	 	Fila(){
			 normal = new Pilha();
			 inverso = new Pilha();
		 }
 	
	 	void entrar(char n){
	 		normal->push(n);
		}
		
		char sair(){
			char temp = ' ';
			if(normal->tamanho() != 0){	
				inverter(normal, inverso, 1);
				temp = normal->pop();
				inverter(inverso, normal, 0);
			}
		 	return temp;
		}
	
		void inverter(Pilha *origem, Pilha *destino, int parada){
			while(origem->tamanho() > parada){
					destino->push(origem->pop());
				}
		}
};


void casamentoDelimitador(){
	Pilha *p = new Pilha();
	string s;
	int i;
	bool estadoBreak = false;
	
	cout << "Qual a sua expressão a ser analisada: ";
	fflush (stdin);
	cin >> s;
	
	for(i = 0; i < s.size(); i++){
		if(s[i] == '('){
			p->push('(');
		}
		if(s[i] == ')'){
			if(p->topo == NULL){
				estadoBreak = true;
				break;
			}
			p->pop();
		}
	}
	if(p->topo == NULL && estadoBreak == false){
		cout << "==> CORRETO";
	} else {
		cout << "==> ERRO";
	}
}
	
void ehInverso(){
	Pilha *p = new Pilha();
	string s;
	int i;
	bool estadoInverso = false;
	
	cout << "Qual a sua expressão a ser analisada: ";
	fflush (stdin);
	cin >> s;
	
	for(i = 0; i < s.size(); i++){
		if(s[i] == 'C'){
			estadoInverso = true;
		}
		if(estadoInverso == false){
			p->push(s[i]);
		} else{
			 if(s[i] == p->topo->nome){
				 p->pop();
			 }	
		}
	}
	if(p->topo == NULL && estadoInverso == true){
		cout << "==> É INVERSO";
	} else {
		cout << "==> NÃO É INVERSO";
	}
}




int main(){
	setlocale(LC_ALL, "Portuguese");
	//casamentoDelimitador();
	//ehInverso();
	
	Fila *f = new Fila();
	f->entrar('A');
	f->entrar('B');
	f->entrar('C');
	cout << f->sair();
	cout << f->sair();
	cout << f->sair();
	f->entrar('l');
	cout << f->sair();
	
	/**********************/
	/*
	Pilha *p1 = new Pilha();
  p1->push('A');
  p1->push('B');
  p1->push('C');
  cout << p1->pop() << endl;
	cout << p1->pop() << endl;
	cout << p1->pop() << endl;
	*/
		
}
