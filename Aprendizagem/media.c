#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


	int main(){
		int n1,n2,n3,n4,media;
	
		
	setlocale(LC_ALL,"PORTUGUESE");
	printf("insira a primeira nota\n");
	scanf("%d",&n1);
	
	printf("insira a segunda nota\n");
	scanf("%d",&n2);
	
	printf("insira a terceira nota\n");
	scanf("%d",&n3);
	
	printf("insira a quarta nota\n");
	scanf("%d",&n4);

	media = (n1+n2+n3+n4)/4;
	printf("Sua Média é %d\n",media);
	system ("PAUSE");
	}