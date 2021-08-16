#include <stdio.h>
#include <math.h>

float CalculaRaizes(float a, float b, float c){

    float v_delta, v_x1, v_x2;

    v_delta = pow(b, 2) - 4 * a * c;


    if (v_delta < 0){

        return 0;
    }

    else{

        v_x1 = ((-1) * b + sqrt(v_delta)) / 2 * a;

        v_x2 = ((-1) * b - sqrt(v_delta)) / 2 * a;

        return v_x1 + v_x2;

    }


}

int main(void){

    float v_a, v_b, v_c, v_retorno;

    scanf("%f", &v_a);
    scanf("%f", &v_b);
    scanf("%f", &v_c);

    v_retorno = CalculaRaizes(v_a, v_b, v_c);

    if(v_retorno != 0){

        printf("Soma das raizes reais: %.2f", v_retorno);

    }

    else{

        printf("Soma indefinida");

    }


    return 0;
}