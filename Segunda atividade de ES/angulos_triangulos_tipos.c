#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	int ang1, ang2, ang3;
	printf("Insira o seu primeiro ângulo: ");
	scanf("%d", &ang1);
	 
	printf("Insira o seu segundo ângulo: ");
	scanf("%d", &ang2);
	
	printf("Insira o seu terceiro ângulo: ");
	scanf("%d", &ang3);
	
	if(ang1 && ang2 && ang3 != 0){
		if((ang1+ang2+ang3) == 180){
			if((ang1 < 90) && (ang2 < 90) && (ang3 < 90)){
				printf("É um triângulo acutângulo");
			} else if((ang1 == 90) || (ang2 == 90) || (ang3 == 90)) {
				printf("É um triângulo retângulo");
			} else if((ang1 > 90) || (ang2 > 90) || (ang3 > 90)){
				printf("É um triângulo obtusângulo");
			}
		} else {
			printf("Não compõe um triângulo");
		}
	} else {
			printf("Não compõe um triângulo");
	}

}