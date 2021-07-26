#include <stdio.h>

int main(void){

    int v_divisor, v_dividiu, v_x;

    v_dividiu = 0;

    scanf("%d", &v_x);

    while(v_x < 0){

        scanf("%d", &v_x);

    }

    if(v_x > 0){
        for(v_divisor = 1; v_divisor <= v_x; v_divisor++){

            if (v_x % v_divisor == 0){
                
                v_dividiu++;

            }

        }

        if(v_dividiu == 2){

            printf("O número %d é primo.", v_x);   

        }

        if(v_dividiu != 2){

            printf("O número %d não é primo.", v_x);
        }

}

}