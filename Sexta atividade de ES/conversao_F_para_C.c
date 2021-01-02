#include <stdio.h>
#include <locale.h>
#include "HICP.h"	

int main(){
	setlocale(LC_ALL, "Portuguese");
	float temp_f;
		
	printf("Digite a temperatura em °F: ");
	scanf("%f", &temp_f);
		
	printf("A temperatura em °C: ");
	printf("%.3f", conversao_F_para_C(temp_f));
	printf("\n");
	
	return 0;
}


