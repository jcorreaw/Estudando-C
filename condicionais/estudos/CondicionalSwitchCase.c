#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo Variáveis
    int a = 2;
    char b = 'y';

    //Switch
    switch(a){
        case 1:
            printf("\n Opcao escolhida: 1");
            break;
        case 2:
            printf("\n Opcao escolhida: 2");
            break;
        case 3:
            printf("\n Opcao escolhida: 2");
            break;
        default:
            printf("\n Opcao invalida");
            break;
    }

    //Switch com Char
    switch(b){
        case 'x':
            printf("\n A letra eh x");
            break;
        default:
            printf("\n Opcao invalida");
            break;
    }
}
