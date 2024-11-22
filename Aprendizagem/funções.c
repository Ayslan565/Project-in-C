#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//Funções

void mensagem(){
    printf("Roberto Carlos ");
    
}

int soma(int a, int b){
    int resultado = a+b;
    return resultado;
}

char retorno(char caracter){ 
    printf("%c",caracter+1);
    ;
}

int main(){
    setlocale(LC_ALL,"PORTUGUESE");

    print("Ola Mundo");
    mensagem();
    retorno();
    return 0;
}

