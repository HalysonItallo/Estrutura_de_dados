#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int comeco = 1, final = 10, resultado = 0, i = 0;
	
	while(comeco <= final){
		resultado = comeco * i;
		printf("%d X %d  = %d\n", comeco, i, resultado);
		i++;
		
		if(i == 10){
			i = 0;
			printf("fim da tabuada da %d\n\n", comeco);
			comeco++;
			resultado = 0;
		}
	}
}
