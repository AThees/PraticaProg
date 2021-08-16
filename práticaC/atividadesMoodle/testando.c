#include <stdio.h>
#include <string.h>

int main(void){

    int i;

    for(i=0; i < 10; i++){

        if (i == 5){
            break;
        }

        printf("%d", i);


    }

}