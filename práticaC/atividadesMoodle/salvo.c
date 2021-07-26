#include <stdio.h>
#include <math.h>

void f_calculaE(float x){

    int v_denominador, v_multiplicador;
    float v_denominadorFatorado, v_soma, v_result;
    int  v_multiplicadorFat1, v_multiplicadorFat2;
    float iFat1, iFat2;
    
    v_denominadorFatorado = 1;
    v_result = 0;
    v_denominador = 1;
    v_soma = 1;
    v_multiplicador = 1;
    v_multiplicadorFat1 = 1;
    iFat1 = 1;
    v_multiplicadorFat2 = 1;
    iFat2 = 1;

    

    printf("1 + ");
    do{
        // Fatora o numero do denominador 

        do{
            v_denominadorFatorado = v_denominadorFatorado * v_multiplicador;

            v_multiplicador++;

        } while (v_multiplicador<=v_denominador);


        v_result = 1 / v_denominadorFatorado;

        v_soma = v_soma + v_result;


        printf("1/%d!", v_denominador);

        v_denominador++;


        do{
            iFat1 = iFat1 * v_multiplicadorFat1;
            v_multiplicadorFat1++;
        } while (v_multiplicadorFat1<=(v_denominador - 1));


        do{
            iFat2 = iFat2 * v_multiplicadorFat2;
            v_multiplicadorFat2++;
        } while (v_multiplicadorFat2<=(v_denominador));

        if(((fabs((1 / iFat1) - (1 / iFat2))) < x)){
            printf(" = ");
        }
        else {

            printf(" + ");

        }

    }while((fabs((1 / iFat1) - (1 / iFat2))) >= x);

    printf("%.3f", v_soma);
}


int main(void){

    float x;

    x = 0.2 ;
    // scanf("%f", &x);
    f_calculaE(x);

    return 0;
}