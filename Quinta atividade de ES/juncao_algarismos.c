#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct 		
{  
	char frase[50]; 
	int numero;
} Frase;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Frase f;
	memset(&f, 0, sizeof(Frase));	
	
	printf("Digite a frase: ");
	gets(f.frase);		

	char *unidade[10] = {"zero", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"}; 
	int i;
	
	for(i = 0; i < sizeof(f.frase)/sizeof(char); i++){
		if( 48 <= (int)f.frase[i] && (int)f.frase[i] <= 57){
			switch(f.frase[i]) {
				case '0':
					printf("%s ", unidade[0]);
					break;
		 		case '1':
		 			printf("%s ", unidade[1]);
		 			break;		
		 		case '2':
		 			printf("%s ", unidade[2]);
		 			break;
		 		case '3':
		 			printf("%s ", unidade[3]);
		 			break;
		 		case '4':
		 			printf("%s ", unidade[4]);
		 			break;
		 		case '5':
		 			printf("%s ", unidade[5]);
		 			break;
		 		case '6':
		 			printf("%s ", unidade[6]);
		 			break;
		 		case '7':
		 			printf("%s ", unidade[7]);
		 			break;
		 		case '8':
		 			printf("%s ", unidade[8]);
		 			break;
				case '9':
		 			printf("%s ", unidade[9]);
		 			break;
			}
		} else{
			printf("%c", f.frase[i]);
		}
	}
	
	return 0;
}