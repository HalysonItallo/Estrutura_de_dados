#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main (){
	setlocale(LC_ALL, "Portuguese");
	int bin[8], i, decimal = 0;
	printf("Digite insira o seu número bináriro com um espaço de diferença: ");
	
	for(i = 0; i < 8; i++){	
		scanf("%d", &bin[i]);	 	
	}
	
	
	for(i = 0; i < sizeof(bin)/sizeof(int); i++){
		decimal += bin[(sizeof(bin)/sizeof(int)-1) - i ] * pow(2,i);
	} 
	
	
	printf("%d", decimal);
	printf("\nHexadecimal -> %2X", decimal);
		
}