#include <stdio.h>
#include <stdlib.h>

void main(){

    int i;

    for(i = 10; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d eh par \n", i);
        }else{
            printf("%d eh impar \n", i);
        }
    }
}
