#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    float nota1, nota2, nota3, media;
    printf("Digite a nota 1:");
    scanf("%f", &nota1);

    printf("\nDigite a nota 2:");
    scanf("%f", &nota2);

    printf("\nDigite a nota 3:");
    scanf("%f", &nota3);

    media = ((nota1+nota2+nota3)/3);
    printf("\nA m�dia do aluno foi: %.2f", media);

    if(media >= 7,00){
        printf("\n\nO aluno foi aprovado! Parab�ns campe�o!");
    }else{
        printf("\n\nO aluno foi reprovado! Sinto muito, na pr�xima voc� vai conseguir!");
    }
}
