#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct{
	char frase[50];
	char nova_frase[50];
	int posicoes[50]; 
	char descriptografado[50]; 
} criptografia;

int main(){
  setlocale(LC_ALL, "Portuguese");
 
  char vogais[10] = "AEIOUaeiou";
	
	criptografia c;
	memset(&c, 0, sizeof(criptografia));	
  printf("Informe uma frase: ");
  fgets(c.frase, 50, stdin);

  int i, j, aux = 0;

  for(i = 0; i < strlen(c.frase); i++){
   	for(j = 0; j < 10; j++){
      if(c.frase[i] == vogais[j]){
				c.nova_frase[i] = '#';
				c.posicoes[aux] = i;
				c.descriptografado[aux++] = c.frase[i];
     	 	break;
      } else if(c.nova_frase[i] != c.frase[i]){
				c.nova_frase[i] = c.frase[i];
			}
		}
  }

  printf("Criptografado -> %s", c.nova_frase);

  for(i = 0; i < strlen(c.descriptografado); i++){
    c.nova_frase[c.posicoes[i]] = c.descriptografado[i]; 
  }

  printf("Descriptografado -> %s", c.nova_frase);
  
	return 0;
}