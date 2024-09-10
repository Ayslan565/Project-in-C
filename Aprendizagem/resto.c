#include <stdio.h>
int main(){
	int n1,n2,Resto,div; 
		
	printf("Seja bem vindo a calculadora rapida!\n");
	
	printf("Fale o primeiro numero: \n");
	scanf("%d",&n1);
	
	printf("Fale o segundo numero:\n");
	scanf("%d",&n2);
	div = n1 /n2;
	printf("%d / %d = %d\n", n1,n2,div);

	Resto = n1 % 2;
	printf("O resto e %d\n",Resto);	
	return 0;
}
