#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    float valor1, valor2, diferenca;

    printf("Digite o primeiro numero: ");
    scanf("%f", &valor1);
    printf("Digite o segundo numero: ");
    scanf("%f", &valor2);

    diferenca = (valor1 - valor2);

    printf("A diferença entre os dois numeros é: %d", abs(diferenca));

}
