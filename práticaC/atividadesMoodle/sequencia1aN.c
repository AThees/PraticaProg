#include <stdio.h>

void F_sequencia_de_numeros(int Num){

    int i;

    i = 0;

    while (i < Num){

        printf("%d ", i + 1);

        i++;

    }



}

int main(void){

    int V_numero;

    scanf("%d", &V_numero);

    F_sequencia_de_numeros(V_numero);


}