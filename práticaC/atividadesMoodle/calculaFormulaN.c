#include <stdio.h>

void f_calculaFormula(int v_num){

    int i, iFat, n, v_soma;
    float v_e;

    v_e = 0;
    i = 1;
    v_soma = 0;

    while(i < v_num){

        for(iFat = 1; i > 1; i = i - 1){     

        iFat = iFat * n;
    
        }

        v_e = 1 / iFat;

        v_soma = v_soma + v_e;

        i++;

    }

    printf("E = %.6f", v_e);

}


int main(void){

    int v_num;

    v_num = 10;

    // scanf("%d", &v_num);

    f_calculaFormula(v_num);

}