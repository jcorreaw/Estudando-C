#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //Definindo Variaveis
    int a = 5, b = 3;

    //Soma
    printf("\n A soma de %d e %d �: %d",a, b, a + b);

    //Subtra��o
    printf("\n A subtra��o de %d e %d �: %d",a, b, a - b);

    //Divis�o
    printf("\n A divis�o de %d e %d �: %d",a, b, a / b);

    //Multiplica��o
    printf("\n A multiplica��o de %d e %d �: %d",a, b, a * b);

    //Resto da Divis�o
    printf("\n O resto da divis�o de %d e %d �: %d",a, b, a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 �: %d", abs(-3));


    system("pause");
}
