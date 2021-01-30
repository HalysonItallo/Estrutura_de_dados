#include <queue>
#include <iostream>
using namespace std;

template <class T>
class Queue: public queue<T> {
	protected:
		queue<T> fila;
	public:
	T popQueue(){
		T tmp=fila.front();
		fila.pop();
		return tmp;
	}
};

class Pilha
{		
public:
	Queue<int> normal;
	Queue<int> inverso;
	int tam;
	
	Pilha(){
		tam = 0;
	}
	
	void empilhar(int value){
		normal.push(value);
	}	
	
	int desempilhar(){
		int temp = -1;
		if(normal.size() != 0){	
			inverter(&normal, &inverso, 1);
			
			temp = normal.front();
			normal.pop();
			
			inverter(&inverso, &normal, 0);
		}
		return temp;
	}
	
	void inverter(Queue<int> *origem, Queue<int> *destino, int parada){
		while(origem->size() > parada){
				destino->push(origem->front());
				origem->pop();
		}
	}
};

int main(){
	Pilha p; 
  p.empilhar(1); 
  p.empilhar(2); 
	cout << p.desempilhar();
 	cout << p.desempilhar();
	p.empilhar(5);
	cout << p.desempilhar();
	return 0;
}
