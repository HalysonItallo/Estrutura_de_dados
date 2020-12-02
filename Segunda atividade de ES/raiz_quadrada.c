#include <stdio.h>
#include <locale.h>
#include <math.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float cof_A, cof_B, cof_C;
	
	printf("Digite o coeficiente 'A': ");
	scanf("%f", &cof_A);
	 
	printf("Digite o coeficiente 'B': ");
	scanf("%f", &cof_B);
	
	printf("Digite o coeficiente 'C': ");
	scanf("%f", &cof_C);
	
	
	if (cof_A != 0){
		float delta = sqrt(pow(cof_B,2) - 4.0*cof_A*cof_C);
		if(delta < 0){
			printf("Não existem raízes reais");
		} else{
			float x1 = ((-1*cof_B) + delta) / (2*cof_A);
    	float x2 = ((-1*cof_B) - delta) / (2*cof_A);
    	printf("A raiz 1: %.2f a raiz 2: %.2f", x1, x2);	
		}
	} else{
		printf("'A' não pode ser 0");
	}
}
