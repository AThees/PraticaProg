#include <stdio.h>

int main (void){

    float  altura, diametro, raio, volume;

    scanf ("%d", &altura);

    scanf ("%d", &diametro);

    raio = diametro/2;

    volume = (3.141592*(raio * raio)) * altura;

    printf("O volume do copo é: %.2f cm3.", volume);

}