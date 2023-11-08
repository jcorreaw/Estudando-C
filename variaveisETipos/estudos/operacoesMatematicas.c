#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //Definindo Variaveis
    int a = 5, b = 3;

    //Soma
    printf("\n A soma de %d e %d é: %d",a, b, a + b);

    //Subtração
    printf("\n A subtração de %d e %d é: %d",a, b, a - b);

    //Divisão
    printf("\n A divisão de %d e %d é: %d",a, b, a / b);

    //Multiplicação
    printf("\n A multiplicação de %d e %d é: %d",a, b, a * b);

    //Resto da Divisão
    printf("\n O resto da divisão de %d e %d é: %d",a, b, a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 é: %d", abs(-3));


    system("pause");
}
