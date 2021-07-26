#include <stdio.h>
#include <math.h>

int main(void){

    int n, multiplicador, resultado;

    multiplicador = 1;

    resultado = 0;

    scanf("%d", &n);

    do{

        resultado = n * multiplicador;

        printf("%d x %d = %d\n", n, multiplicador, resultado);

        multiplicador++;


    }while (multiplicador <= n);


}
