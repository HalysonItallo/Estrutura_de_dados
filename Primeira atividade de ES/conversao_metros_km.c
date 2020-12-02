#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m, km;
		
	printf("Digite o seu valor em M: ");
	scanf("%d", &m);
		
	printf("O seu valor em Km: ");
	km = m / 1000;
	printf("%d", km);
	printf("\n");
	printf("O seu valor em M: ");
	printf("%d", m);
	printf("\n");
	
	system("PAUSE");
}
