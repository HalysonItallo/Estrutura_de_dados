#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int limite_inferior = 0, limite_superior = 0, i;
	
	printf("Digite o limite inferior: ");
	scanf("%d", &limite_inferior);
	
	printf("Digite o limite superior: ");
	scanf("%d", &limite_superior);

	
		
	for(i = limite_inferior; i < limite_superior; i++){
		if(i % 2 == 0 && i != limite_superior){
			 printf("%d\n", i);	
		}
	}
}

