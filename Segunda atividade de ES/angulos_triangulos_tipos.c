#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL,"Portuguese");
	
	int ang1, ang2, ang3;
	printf("Insira o seu primeiro �ngulo: ");
	scanf("%d", &ang1);
	 
	printf("Insira o seu segundo �ngulo: ");
	scanf("%d", &ang2);
	
	printf("Insira o seu terceiro �ngulo: ");
	scanf("%d", &ang3);
	
	if(ang1 && ang2 && ang3 != 0){
		if((ang1+ang2+ang3) == 180){
			if((ang1 < 90) && (ang2 < 90) && (ang3 < 90)){
				printf("� um tri�ngulo acut�ngulo");
			} else if((ang1 == 90) || (ang2 == 90) || (ang3 == 90)) {
				printf("� um tri�ngulo ret�ngulo");
			} else if((ang1 > 90) || (ang2 > 90) || (ang3 > 90)){
				printf("� um tri�ngulo obtus�ngulo");
			}
		} else {
			printf("N�o comp�e um tri�ngulo");
		}
	} else {
			printf("N�o comp�e um tri�ngulo");
	}

}