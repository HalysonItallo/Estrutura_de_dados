#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	 int num1 = 0, num2 = 0, i, resultado = 0;
	 
	 printf("Digite o primeiro n�mero: ");
	 scanf("%d", &num1);	
	 
	 printf("Digite o segundo n�mero: ");
	 scanf("%d", &num2);
	 
	 
	 for(i=0;i < num1;i++){
	 	if(num1 >= num2 * i){
			resultado = i;			 
		 } 
	 }
	 printf("Sua divis�o: %d", resultado);


}