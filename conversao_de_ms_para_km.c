#include <stdio.h>

void main(){
	float velocity;
	printf("Digite o valor da sua velocidade em m/s: ");
	scanf("%f", &velocity);
	printf("%.3f", velocity * 3.6);
	printf("\n");
	
	system("PAUSE");
}
