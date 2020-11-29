#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float km, m;
		
	printf("Digite o seu valor em Km: ");
	scanf("%f", &km);
		
	printf("O seu valor em M: ");
	m = km * 1000;
	printf("%.3f", m);
	printf("\n");
	
	system("PAUSE");
}
