#include <stdio.h>

float f_calculaDesconto(int v_cod, float v_preco){

    float v_valorFinal;

    if (v_cod >= 1 && v_cod <= 4){

        v_valorFinal = v_preco - (v_preco * 0.1);

        return v_valorFinal;

    }

    if (v_cod >= 5 && v_cod <= 7){

        v_valorFinal = v_preco - (v_preco * 0.25);

        return v_valorFinal;


    }

    if (v_cod >= 8 && v_cod <= 10){

        v_valorFinal = v_preco - (v_preco * 0.35);

        return v_valorFinal;


    }

    if (v_cod >= 11 && v_cod <= 15){

        v_valorFinal = v_preco - (v_preco * 0.45);

        return v_valorFinal;


    }

    return 0;
}



int main(void){

    int v_codigo;
    float v_preco, v_valorFinal;
    
    scanf("%d", &v_codigo);

    scanf("%f", &v_preco);

    v_valorFinal = f_calculaDesconto(v_codigo, v_preco);

    printf("R$ %.2f", v_valorFinal);

    return 0;
}