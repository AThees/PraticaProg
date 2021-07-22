#include <stdio.h>
#include <math.h>

void f_calculaE(float x){

    // Declara as variáveis necessárias
    int v_denominador, v_multiplicador;
    float v_denominadorFatorado, v_soma, v_result;
    int  v_multiplicadorFat1, v_multiplicadorFat2;
    float iFat1, iFat2;
    
    // Inicia as variáveis do programa;
    v_denominadorFatorado = 1;
    v_result = 0;
    v_denominador = 1;
    v_soma = 1;
    v_multiplicador = 1;
    v_multiplicadorFat1 = 1;
    iFat1 = 1;
    v_multiplicadorFat2 = 1;
    iFat2 = 1;

    
    // Printa o 1 iniciado em "v_soma = 1"

    printf("1 + ");

    do{

        // Fatora o numero do denominador 

        do{
            v_denominadorFatorado = v_denominadorFatorado * v_multiplicador;

            v_multiplicador++;

        } while (v_multiplicador<=v_denominador);


        // Faz o cálculo da soma dos termos
        v_result = 1 / v_denominadorFatorado;

        v_soma = v_soma + v_result;

        // Printa o termo somado
        printf("1/%d!", v_denominador);

        // Incrementa o denominador
        v_denominador++;


        // Fatora os denominadores para as verificações no while
        do{
            iFat1 = iFat1 * v_multiplicadorFat1;
            v_multiplicadorFat1++;
        } while (v_multiplicadorFat1<=(v_denominador - 1));


        do{
            iFat2 = iFat2 * v_multiplicadorFat2;
            v_multiplicadorFat2++;
        } while (v_multiplicadorFat2<=(v_denominador));


        // Caso esteja prestes a sair do loop, printa " = "
        if(((fabs((1 / iFat1) - (1 / iFat2))) < x)){
            printf(" = ");
        }
        // Enquanto se mantiver no loop, printa " + "
        else {

            printf(" + ");

        }

    }while((fabs((1 / iFat1) - (1 / iFat2))) >= x);

    // Printa o resultado da função
    printf("%.3f", v_soma);
}


int main(void){

// Declara x
    float x;

// Atribui um valor a x
    scanf("%f", &x);

// Faz a chamada da função
    f_calculaE(x);

    return 0;

}

}