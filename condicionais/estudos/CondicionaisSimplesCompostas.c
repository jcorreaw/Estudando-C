#include <stdio.h>
#include <stdlib.h>

void main(){

    //variaveis
    int a = 5, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //condicional simples
    if(a == 5){
        printf("\n A variavel a eh igual a 5");
    }

    if(b == 2.5){
        printf("\n A variavel b eh igual a 2.5");
    }

    if(c == 'x'){
        printf("\n A variavel c eh igual a x");
    }

    //numero par ou impar
    if(a % 2 == 1){
        printf("\n A varivel a eh impar");
    } else{
        printf("\n A varivel a eh par");
    }

    //condicional composta
    if(opcao == 1){
        printf("\n A opcao = 1");
    }else if(opcao == 2){
        printf("\n A opcao = 2");
    }else{
        printf("\n A opcao nao e 1 nem 2");
    }
}
