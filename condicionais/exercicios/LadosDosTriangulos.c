#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL, "");

    int ladoA, ladoB, ladoC;
    printf("Digite o lado A: ");
    scanf("%d", &ladoA);

    printf("\nDigite o lado B: ");
    scanf("%d", &ladoB);

    printf("\nDigite o lado C: ");
    scanf("%d", &ladoC);

    if((ladoA == ladoB) && (ladoB == ladoC)){
        printf("\nO Tri�ngulo � equil�tero");
    }else{
        if( (ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA)){
            printf("\nO tri�ngulo � is�sceles!");
        }else{
            printf("\nO tri�ngulo � escaleno!");
        }
    }
}
