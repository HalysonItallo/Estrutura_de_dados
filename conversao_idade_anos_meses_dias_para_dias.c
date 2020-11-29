#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int anos, meses, dias;
		
	printf("Digite a sua idade em anos: ");
	scanf("%d", &anos);
	
	printf("Digite a sua idade em meses: ");
	scanf("%d", &meses);
	
	printf("Digite a sua idade em dias: ");
	scanf("%d", &dias);
	
	dias += anos * 365;
	dias += meses * 30;
	
	
	printf("Sua idade em dias: ");
	printf("%d", dias);
	printf("\n");
	
	
	
	system("PAUSE");
}
