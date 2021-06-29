#include <stdio.h>

int main(void){

    int v_pares, v_impares, v_totalNumeros, v_num, v_somaTotal ;
    float v_somaPares;
    v_totalNumeros = 0;
    v_pares = 0;
    v_impares = 0;
    v_somaTotal = 0;
    v_somaPares = 0;

    scanf("%d", &v_num);

    while (v_num != 0 && v_num > 0){

        v_totalNumeros++;
        v_somaTotal = v_somaTotal + v_num;

        if(v_num % 2 == 0){

            v_pares++;

            v_somaPares = v_somaPares + v_num;

        }

        if(v_num % 2 != 0){

            v_impares++;

        }

        scanf("%d", &v_num);

    }



    printf("%d\n", v_pares);
    printf("%d\n", v_impares);
    if (v_pares == 0){

        printf("0.000\n");
    }
    if (v_pares > 0){
        printf("%.3f\n", v_somaPares / (float)v_pares);
    }
    
    printf("%.3f\n", v_somaTotal / (float)v_totalNumeros);










}