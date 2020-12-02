#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salary;
	printf("Digite o seu salário: ");
	scanf("%f", &salary);
	salary += (salary * 25) / 100;
	printf("%.3f", salary);
	printf("\n");
	
	system("PAUSE");
}
