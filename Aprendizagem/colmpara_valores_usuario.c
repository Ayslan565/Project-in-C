#include <stdio.h>
#include <stdlib.h>
int main (void){
	int v1,v2;
	
	printf("insira o primeiro valor:\n");
	scanf("%d",&v1);
	
	printf("insira o segundo valor\n");
	scanf("%d",&v2);
	
	if (v1<v2){
		printf("O primeiro valor eh menor que o segundo");
	}
	else if  (v1>v2){
		printf("O primeiro valor eh maior que o segundo");

	}
	else{
		printf("O Primeiro valor eh igual o segundo");
	}
}
