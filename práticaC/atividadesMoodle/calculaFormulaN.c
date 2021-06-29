#include <stdio.h>

void f_calculaFormula(int v_num){

    int v_denominador, n, v_multiplicador;
    float v_result, v_soma, iFat;

    v_result = 0;
    v_denominador = 1;
    v_soma = 1;
    iFat = 1;
    v_multiplicador = 1;

    while(v_denominador <= v_num){

    do{
        iFat = iFat * v_multiplicador;

        v_multiplicador++;

    } while (v_multiplicador<=v_denominador);

        v_result = 1 / iFat;

        v_soma = v_soma + v_result;

        v_denominador++;

    }

    printf("E = %.6f", v_soma);

}


int main(void){

    int v_num;

    v_num = 10;

    // scanf("%d", &v_num);

    f_calculaFormula(v_num);

}