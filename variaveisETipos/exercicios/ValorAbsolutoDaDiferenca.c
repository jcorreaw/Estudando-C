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

    printf("A diferen�a entre os dois numeros �: %d", abs(diferenca));

}
