#include <stdio.h>
#include <locale.h>


void main()
{
	setlocale(LC_ALL, "Portuguese");
	int x,y,r;
	printf("Insira o n�mero x: ");
	scanf("%d", &x);
	
	printf("Digite uma lista de numeros:\n");
	
	while(1) {
		printf("Num: ");
		scanf("%d", &y);
		printf("Num: ");
		scanf("%d", &r);
		
		if((y + r) == x){
			 printf("A soma dos dois ultimos n�meros � igual a x=%d\n", x);	
			 break;
		 }
	}	
}