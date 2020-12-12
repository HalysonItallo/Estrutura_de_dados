#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

void decimal_para_romano (unsigned int numero, char *resultado) 
{
    char *centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char *dezenas[]  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int   size[] = { 0, 1, 2, 3, 2, 1, 2, 3, 4, 2,};
    
		strcpy (resultado, centenas[numero / 100]); 
		resultado += size[numero / 100]; 
		numero = numero % 100;
    
		strcpy (resultado, dezenas[numero / 10]);   
		resultado += size[numero / 10];  
		numero = numero % 10;
    
		strcpy (resultado, unidades[numero]);       
		resultado += size[numero];
}

void main()
{
	setlocale(LC_ALL, "Portuguese");
	char *vet_numeros_em_romano = malloc(sizeof(char) * 1024);
	int numero;
	
	printf("Digite um valor a ser convertido: ");
	scanf("%d", &numero);
	
	if(numero <= 0 || numero >= 1000){
			printf("Valor indisponível\n");
			system("pause");
	}
	
	decimal_para_romano(numero, vet_numeros_em_romano);
	printf("O valor %d equivale %s em romano\n", numero, vet_numeros_em_romano);
}