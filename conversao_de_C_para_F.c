#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float temp_c, temp_f;
		
	printf("Digite a temperatura em °C: ");
	scanf("%f", &temp_c);
		
	printf("A temperatura em °F: ");
	temp_f = (9 * temp_c + 160) / 5;
	printf("%.3f", temp_f);
	printf("\n");
	
	system("PAUSE");
}
