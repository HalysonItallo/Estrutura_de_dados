#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float temp_c, temp_f;
		
	printf("Digite a temperatura em °F: ");
	scanf("%f", &temp_f);
		
	printf("A temperatura em °C: ");
	temp_c = (5 * temp_f - 160) / 9;
	printf("%.3f", temp_c);
	printf("\n");
	
	system("PAUSE");
}
