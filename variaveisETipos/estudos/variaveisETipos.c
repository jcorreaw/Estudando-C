#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

    //Imprime Olá
    printf("Olá \n");

    //Valor de variavel e texto com variavel
    int a = 5;
    int b = 6;
    printf("O valor de a é: %d \n", a);
    printf("O valor de b é: %d \n", b);
    printf("A soma de A + B é: %d \n", a + b);

    //Lendo valor inteiro
    int a1 = 50;
    printf("O valor de a é: %d \n", a1);
    scanf("%d", &a1);
    printf("O valor de A mudou para: %d \n", a1);

    //Lendo valor quebrado
    float b1 = 5.5;
    printf("O valor de B é: %f \n", b1);
    scanf("%f", &b1);
    printf("O valor de B mudou para: %f \n", b1);

    //Lendo letra
    char letra = 't';
    printf("O valor de Letra é: %c \n", letra);
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor de Letra mudou para: %c \n", letra);

    system("pause");

}
