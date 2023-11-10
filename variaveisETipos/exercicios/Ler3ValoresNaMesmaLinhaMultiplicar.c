#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    int numero1, numero2, numero3, multiplicacao;

    printf("Digite tres numeros separados por espaco\n");

    scanf("%d %d %d", &numero1, &numero2, &numero3);

    multiplicacao = numero1 * numero2 * numero3;

    printf("O resultado da multiplicação é: %d", multiplicacao);

}
