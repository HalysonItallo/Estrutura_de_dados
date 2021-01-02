#include <math.h>
#include <stdbool.h>

float ms_para_km(float velocidade){
	return velocidade * 3.6;
}

float km_para_ms(float velocidade){
	return velocidade / 3.6;
}

float conversao_dolar_para_real(float dolar, float valor_dolar){
	return dolar * valor_dolar;
}

float area_trinagulo(float base, float altura){
	return (base*altura)/2;
}

float area_quadrado(float lado){
	return lado*lado;
}

float area_retangulo(float base, float altura){
	return base*altura;
}

float comprimento_circunferencia(float raio){
	return 2 * M_PI * raio;
}

float volume_esfera(float raio){
	return (4 * 3.14 * pow(raio,3)) / 3;
}

float conversao_C_para_F(float temp_c){
	return (9 * temp_c + 160) / 5;
}

float conversao_F_para_C(float temp_f){
	return (5 * temp_f - 160) / 9;
}

int fatorial(int numero){
	int resultado = 1, i;			
	for(i = 1; i <= numero; i++){
		resultado = resultado * i;
	}
	 	return resultado;
}

bool eh_primo(int numero){
	int i, resultado = 0;
	for (i = 2; i <= numero / 2; i++) {
	  if (numero % i == 0) {
	     resultado++;
	     break;
	  }
 }
 
 return resultado == 0;
}

bool data_valida(int dia, int mes, int ano){
	if(0 < dia && dia <= 31){
		if(0 < mes && mes <= 12){
			if(1000 < ano && ano < 3000){
				return true;
			}
		}
	}
	return false;
}

int mmc(int num1, int num2){
	int aux = 0, i, mmc = 0;
	for(i = 2; i <= num2; i++) {
		aux = num1 * i;
    if((aux % num2) == 0) {
      mmc = aux;
      i = num2 + 1;
 		}
	}
	return mmc;
}

int mdc(int num1, int num2){
	int resto = -1;
	if(resto != 0){
		resto = num1 % num2;
	 	return mdc(num2, resto);	
	}
	return num1;
}

bool eh_bissexto(int ano){
	return ano % 4 ==0;
}

int fatorial_recursivo(int num){
	if(num == 0){
		return 1;
	} 
	return num*fatorial(num - 1);
}


int mdc_recursivo(int num1, int num2){
	if (num1 < num2) {
		return mdc_recursivo(num2, num1);
	}
	else {
		if (num1 % num2 == 0)
 			return num2;
	  else
	  	return mdc_recursivo(num2, num1%num2);
	}
}

int soma_recursiva(int num, int limite) {  
	if(num <= limite) {
		return num + soma_recursiva(num + 1, limite);      
  }    
  return 0;
}

int fibonacci_recursivo(int n) {
  if(n <= 1){
		return n;
	}else{
		return fibonacci_recursivo(n-1) + fibonacci_recursivo(n-2);
	}
}












