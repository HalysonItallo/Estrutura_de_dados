#include <stdio.h>
#include <locale.h>
#include "HICP.c"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int limite, i;
	 
	printf("Insira o limite da sequência de bibonacci: ");
	scanf("%d", &limite);
	for(i = 0; i < limite; i++){
		 printf("%d ",fibonacci_recursivo(i));	
	}
			
	return 0;
}


