#include <stdio.h>
#include <math.h>
	int main(void){

	float numerador;
	int denominador = 1;
	
	printf("Bem Vindo ao Conversor de decimal para fracional!\n\n");
	printf("Insira um numero decimal \n");

	scanf("%f",&numerador);
	do{
		numerador = numerador * 10;
		denominador = denominador * 10;
		}
	while(numerador != trunc(numerador));		
		printf("o seu numerador eh %.0f\n",numerador);
		printf("o seu denominador eh %d",denominador);
	

return 0;
	
	}
