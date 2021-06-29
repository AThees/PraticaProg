#include <stdio.h>

int f_printaMedia(){

    int v_num, v_qtdNumeros, v_soma, v_positivos, v_negativos;

    v_qtdNumeros = 0;
    v_soma = 0; 
    v_positivos = 0;
    v_negativos = 0;

    scanf("%d", &v_num);

    while(v_num != 0){

        v_qtdNumeros++;

        v_soma = v_soma + v_num;

        if (v_num > 0){

            v_positivos++;
        }

        else if(v_num < 0){

            v_negativos++;
        }

        scanf("%d", &v_num);

    }

    printf("%.2f\n", v_soma / (float)v_qtdNumeros);
    printf("%d\n", v_positivos);
    printf("%d\n", v_negativos);
    printf("%d%%\n", v_positivos * 100 / v_qtdNumeros);
    printf("%d%%\n", v_negativos * 100 / v_qtdNumeros);

    return v_qtdNumeros;
}

int main(void){

    int v_total;

    v_total = f_printaMedia();

    printf("%d", v_total);

}