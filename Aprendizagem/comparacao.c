#include <stdio.h>
int main(void){
	int x = 10, y= 5, z =7, k = 7;
	printf("Os operadores relacionais sao usados para fazer comparacoes\n");
	printf("Quando o resultado da comparacao e FALSO retornam 0 (Zero)\n");
	printf("Quando o resultado da comparacao e VERDADEIRO retornam 1 (Um)\n");
	
	printf("\nValor de x = %d",x);
	printf("valor de y =%d",y);
	printf("valor de yz =%d",z);
	printf("valor de k =%d",k);


	printf("\nExemplo 1: x > y :%d", x>y);//Retorna 1 pois é VERDADEIRO
	printf("\nExemplo 2: x < y :%d", x<y);//Retorna zero pois é FALSO

	printf("\nExemplo 3: Z==K :%d",z==k);//Retorna 1 pois é VERDADEIRO
	printf("\nExemplo 4: Z!==K :%d",z!=k);//Retorna zero pois é FALSO
	
	printf("\nExemplo 5: Z >= x: %d",z>=x);//Retorna 1 pois é VERDADEIRO
	printf("\nExemplo 6: Z <= k: %d",z<=k);//Retorna zero pois é FALSO
	
return 0;
}
