#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


	int main(){
		setlocale(LC_ALL,"PORTUGUESE");
		int n,n2,n3,pri,seg,ter,soma;
	printf("insira os 3 valores um abaixo do outro\nEles serão levados ao quadrado e em seguida somados\n");
	scanf("%d",&n);
	scanf("%d",&n2);
	scanf("%d",&n3);
	
	pri= n*n;
	seg= n2*n2;
	ter= n3*n3;
	
	soma = pri + seg + ter;
	 
	printf("%d ao quadrado é %d\n",n,pri);
	printf("%d ao quadrado é %d\n",n2,seg);
	printf("%d ao quadrado é %d\n",n3,ter);
	printf(" A soma dos três é %d\n",soma);

	

	system ("PAUSE");
	}