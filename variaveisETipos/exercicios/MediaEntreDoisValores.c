#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    float nota1, nota2, media;
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media de %f e %f �: %f", nota1, nota2, media);
}

