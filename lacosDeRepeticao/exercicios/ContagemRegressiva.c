#include <stdio.h>
#include <stdlib.h>

void main(){

    int i = 10;

    //while
    while(i >= 0){
        printf("%d \n", i);
        i--;
    }

    //for
    for( i = 10; i >= 0; i-- ){
        printf("%d \n", i);
    }
}
