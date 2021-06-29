#include <stdio.h>
int main(){

    int v_denominador, v_multiplicador=1;
    float iFat;

    v_denominador = 3;
    iFat=1;

    do{
        iFat = iFat * v_multiplicador;
        v_multiplicador++;
    } while (v_multiplicador<=v_denominador);

}


// e = 1/1! + 1/2! + 1/3! + ... + 1/n!