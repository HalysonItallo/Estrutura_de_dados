#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char codigo[100];
    char novo_codigo[100]; 
} criptografia;


int main(){
    setlocale(LC_ALL, "Portuguese");

    criptografia cripto;
    char vogais[10] = "AEIOUaeiou";

    printf("\nQual o codigo: ");
    fgets(cripto.codigo, 100, stdin);

    int i, j;

    for(i = 0; i < strlen(cripto.codigo); i++){
        for(j = 0; j < 9; j++){
            if(cripto.codigo[i] == vogais[j]){
              cripto.novo_codigo[i] = cripto.codigo[i];
            } else if(cripto.novo_codigo[i] != cripto.codigo[i] && i != 0){
              cripto.novo_codigo[i] = '#';
            }
				}   
    }
    
    
    for(i = 0;i < strlen(cripto.codigo); i++){
			 printf("%c", cripto.novo_codigo[strlen(cripto.codigo) - 1 - i]);	
		}
		
		return 0;
}

