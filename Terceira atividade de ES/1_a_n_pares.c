#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int limite_n = 0, i;
	
	printf("Digite o limite dos n�meros: ");
	scanf("%d", &limite_n);
	
	if(limite_n <= 0 ){
		system("pause");
	}
	
	for(i = 1; i <= limite_n; i++){
		if(i %2 == 0){
			 printf("%d\n", i);	
		}
		
	}
}
