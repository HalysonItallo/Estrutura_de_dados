#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int meses, anos;
		
	printf("Digite o valor dos seus meses: ");
	scanf("%d", &meses);
		
	anos = meses / 12;
	meses -= anos * 12;
	
	
	printf("O seu valor em anos: ");
	printf("%d", anos);
	printf("\n");
	printf("O seu valor em meses: ");
	printf("%d", meses);
	printf("\n");
	

	
	system("PAUSE");
}
