#include <stdio.h>
#include <locale.h>
#include "HICP.c"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int limite;
	 
	printf("Insira o limite da soma: ");
	scanf("%d", &limite);
	
	printf("Sua soma até %d: %d", limite, soma_recursiva(0,limite));		
	return 0;
}


