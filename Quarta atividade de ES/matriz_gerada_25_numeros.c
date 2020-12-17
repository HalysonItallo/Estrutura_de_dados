#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	int v[5][5], i, j, index = 1;
	
	for(i = 0; i < 5; i++){
		for(j = 0;j < 5; j++){
			v[i][j] = index++;
		}
	}	
	
	for(i = 0; i < 5; i++){
		for(j = 0;j < 5; j++){
			if(0 < v[i][j] && v[i][j] < 10){
				printf("0%d ",v[i][j]);
			} else{
				 printf("%d ",v[i][j]);	
			}
		}
		printf("\n");
	}	
}