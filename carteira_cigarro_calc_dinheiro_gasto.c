#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int anos, n_cigarros, preco, dias, carteira;
		
	printf("Digite os anos que fuma: ");
	scanf("%d", &anos);
	
	printf("Digite o número de cigarros fumados por dia: ");
	scanf("%d", &n_cigarros);
	
	printf("Digite o preço da carteira: ");
	scanf("%d", &preco);
	
	dias = anos * 365;
	carteira = n_cigarros / 20;
	
	
	
	printf("Sua idade em dias: ");
	printf("%d", dias * carteira * preco);
	printf("\n");
	
	
	
	system("PAUSE");
}