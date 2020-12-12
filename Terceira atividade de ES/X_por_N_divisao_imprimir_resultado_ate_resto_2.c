#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	float X,N;
	
	printf("Insira o valor de x: ");
	scanf("%f",&X);
	printf("Insira o valor de n: ");
	scanf("%f",&N);

	
	while(N>2)
	{
		X = X/N;
		printf("%.2f\n", X);
	 	N = N-1;
	}

}


