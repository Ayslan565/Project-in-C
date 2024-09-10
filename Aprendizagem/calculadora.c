#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int n1=0,n2=0,resul=0,resul2=0,escolha;
	
	//Captação da Númeração do Usuario

	printf("Seja Bem vindo a Calculadora!\n");
	printf("Insira o primeiro numero\n");
	scanf("%d",&n1);
	
	printf("Insira o segundo numero\n");
	scanf("%d",&n2);
	
	//Captação da Númeração do escolha da realização das operações
	printf("Digite qual operacao voce deseja\n");
	printf(" [1] + Soma\n [2] - Subtracao\n [3] / Divisao\n [4] * Multiplicacao\n [5] n*n Potenciacao \n");
	scanf("%d",&escolha);

	switch(escolha){
	
		case 1:	
			resul =n1 + n2 ;
			printf("%d + %d = %d",n1,n2,resul);
			break;		
		
		case 2:	
			resul =n1 - n2;			
			printf("%d - %d = %d",n1,n2,resul);
			break;	
				
		case 3:	
			resul =n1 / n2;			
			printf("%d * %d = %d",n1,n2,resul);
			break;	
			
		case 4:	
			resul =n1 * n2;			
			printf("%d X %d = %d",n1,n2,resul);
			break;			
			
		case 5:	
			resul =n1 * n1;	
			resul2=n2 * n2;		
			printf("%d ao quadrado e  =%d\n",n1,resul);
			printf("%d ao quadrado e  =%d",n2,resul2);
			break;			
		default:
			printf("Invalido insira um numero de 1 a 5");
	}
}