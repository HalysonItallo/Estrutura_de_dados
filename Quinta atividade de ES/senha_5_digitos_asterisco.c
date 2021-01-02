#include <stdio.h>
#include <stdlib.h> 
#include <conio.h> 
#include <string.h>

typedef struct 
{
	char caracteres[10];
} senhas;


int main()
{
	senhas senha = {"\0"};
	int i;
  memset(&senha, 0, sizeof(senhas));
  
  
	printf ("Digite a senha de 5 digitos: ");
	for(i = 0; i < 5; i++){
		senha.caracteres[i] = getch();
		printf ("*");
	}

 if(strcmp(senha.caracteres,"Teste") == 0)
  {
    printf ("\nAcesso permitido!");
  }
  else
  {
    printf ("\nAcesso negado!");
  }	

	return 0;
  
}