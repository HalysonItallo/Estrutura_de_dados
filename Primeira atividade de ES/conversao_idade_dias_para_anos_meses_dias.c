#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int anos, meses, dias;
		
	printf("Digite a sua idade em dias: ");
	scanf("%d", &dias);
	
	anos = dias / 365;
	dias -= anos * 365;
	
	meses = dias / 30;
	dias -= meses * 30;
	
	printf("Seus anos de idade: ");
	printf("%d", anos);
	printf("\n");
	
	printf("Seus meses de idade: ");
	printf("%d", meses);
	printf("\n");
	
	printf("Seus dias de idade: ");
	printf("%d", dias);
	printf("\n");
	
	
	system("PAUSE");
	
}