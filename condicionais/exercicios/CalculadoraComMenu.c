#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL, "");

    float numero1, numero2;
    int opcao;
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("\nDigite o segundo numero: ");
    scanf("%f", &numero2);

    printf("\nDigite uma opção de operação(1-Soma, 2-Subtrair, 3-Dividir, 4-Multiplicar): ");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("Resultado da Soma: %.2f", numero1 + numero2);
        break;
    case 2:
        printf("Resultado da Subtração: %.2f", numero1 - numero2);
        break;
    case 3:
        printf("Resultado da Divisão: %.2f", numero1 / numero2);
        break;
    case 4:
        printf("Resultado da Multiplicação: %.2f", numero1 * numero2);
        break;
    default:
        printf("\n Opcao invalida");
        break;
    }
}
