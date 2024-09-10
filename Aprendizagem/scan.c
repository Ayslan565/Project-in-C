#include <stdio.h>
int main(){
	char conceito;
	float nota;
	int  numero;
	
	printf("Informe o conceito do Aluno: ");
	scanf(" %c",conceito);
	printf("Digite a nota do aluno");
	scanf ("%f",&nota );
	printf ("Informe a matricula do aluno ");
	scanf("%d",&numero);
	
	printf("Seja bem vindo %c!\n sua nota e de %.1f \n sua matricula e %d",conceito,nota,numero);
	return 0;
}
