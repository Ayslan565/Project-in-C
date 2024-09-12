#include <stdio.h>
#include <stdlib.h>
int main (void){
	int n1,n2,n3,aux;
		printf("Insira o primeiro valor");
		scanf("%d",&n1);
		printf("Insira o segundo valor");
		scanf("%d",&n2);
		printf("Insira o terceiro valor");
		scanf("%d",&n3);
	
	if (n1>n2){
		aux = n1;
		n1  = n2;
		n2  = aux;}
	if (n1>n2){
		aux = n1;
		n1  = n3;
		n3  = aux;}

	if (n2>n3){
		aux = n2;
		n2  = n3;
		n3  = aux;}
		
	printf("%d, %d, %d", n1,n2,n3);
	
}