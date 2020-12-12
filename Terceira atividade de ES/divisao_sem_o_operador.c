#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	 int num1 = 0, num2 = 0, i, resultado = 0;
	 
	 printf("Digite o primeiro número: ");
	 scanf("%d", &num1);	
	 
	 printf("Digite o segundo número: ");
	 scanf("%d", &num2);
	 
	 
	 for(i=0;i < num1;i++){
	 	if(num1 >= num2 * i){
			resultado = i;			 
		 } 
	 }
	 printf("Sua divisão: %d", resultado);


}