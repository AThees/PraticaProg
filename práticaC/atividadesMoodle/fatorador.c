#include <stdio.h>
int main(){

    int i, v_multiplicador=1;
    float iFat;

    i = 3;
    iFat=1;

    do{
        iFat = iFat * v_multiplicador;
        v_multiplicador++;
    } while (v_multiplicador<=i);

    printf("%f", iFat);
}


// e = 1/1! + 1/2! + 1/3! + ... + 1/n!