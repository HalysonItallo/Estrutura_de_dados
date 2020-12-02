#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, c, d, u;
	printf("Digite o valor do número: ");
	scanf("%d", &num);
	c = num/100;
	num -= c * 100;
	d = num/10;
	num -= d * 10;
	
	printf("%d", num);
	printf("%d", d);
	printf("%d", c);
	printf("\n");
	
	
	
	system("PAUSE");
}
