#include <stdio.h>
#include <locale.h>
#include "HICP.c"	

int main(){
	setlocale(LC_ALL, "Portuguese");
	float temp_c;
		
	printf("Digite a temperatura em °C: ");
	scanf("%f", &temp_c);
		
	printf("A temperatura em °F: ");
	
	printf("%.3f", conversao_C_para_F(temp_c));
	printf("\n");
	
	return 0;
}


