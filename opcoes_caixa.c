#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	int main (void){
		
		setlocale(LC_ALL, "Portuguese");
		char opcao;
	
		printf("Informe a Opção");
		printf("\n\nA - Saldo da Conta");
		printf("\n\nB - Extrato da Conta");
		printf("\n\nC - Limite Atual\n\n Opção: ");
			scanf(" %c", &opcao);                                                                                                         

		if (opcao == 'A'){
			printf("Seu saldo é : ");
		}
		
		else if(opcao== 'B'){
			printf("O Extrato dos ultimos meses são :");
		}
		
		else if (opcao== 'C')
			printf("O seu limite é ");
			
		else {
			printf("Insira uma Opção válida");
		}
			return 0;
	}
	