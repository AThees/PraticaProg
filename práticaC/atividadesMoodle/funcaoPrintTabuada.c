#include <stdio.h>

void f_imprimeTabuada(int v_num){

    int v_multiplicador;

    v_multiplicador = 0;

    while (v_multiplicador <= 10){

        printf("%d x %d = %d\n", v_num, v_multiplicador, v_multiplicador * v_num);

        v_multiplicador++;
    }


}


int main(void){

    int v_numero;

    scanf("%d", &v_numero);

    while(v_numero != 0){

        printf("Tabuada do %d:\n", v_numero);

        f_imprimeTabuada(v_numero);

        scanf("%d", &v_numero);
        printf("\n");

    }


return 0;
}