#include <stack>
#include <iostream>
using namespace std;

template <class T>
class Stack: public stack<T> {
	protected:
		stack<T> pilha;
	public:
	T popStack(){
		T tmp=pilha.top();
		pilha.pop();
		return tmp;
	}	
};

class Fila
{		
public:
	Stack<int> normal;
	Stack<int> inverso;
	
	void entrar(int value){
		normal.push(value);
	}	
	
	int sair(){
		int temp = -1;
		if(normal.size() != 0){
			inverter(&normal, &inverso, 1);
			
		 	temp = normal.top();
			normal.pop();
			
			inverter(&inverso, &normal, 0);
		}
		
		return temp;
	}
	
	void inverter(Stack<int> *origem, Stack<int> *destino, int parada){
		while(origem->size() > parada){
				destino->push(origem->top());
				origem->pop();
		}
	}
};

int main(){
	Fila *f = new Fila();
	f->entrar(10);
	f->entrar(20);	
	cout << f->sair();
	cout << f->sair();
	return 0;
}
