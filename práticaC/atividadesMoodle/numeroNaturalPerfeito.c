#include <stdio.h>

void numeroNatPerfeito(int num){

    int soma, numeroTeste, i, posicao, divisoresTotal, divisores, iDivisores;

    numeroTeste = 0;
    posicao = 0;
    
    while(posicao != num){

        numeroTeste ++;
        i = 1;
        soma = 0;
        divisores = 0;
        iDivisores = 1;
        divisoresTotal = 0;

        for (iDivisores = 1; iDivisores < numeroTeste; iDivisores++){

            if(numeroTeste % iDivisores == 0){
                divisores++;
            }

        }


        while (i < numeroTeste){
            if (numeroTeste % i == 0){

                soma = soma + i;
                divisoresTotal++;

            }

            if(divisoresTotal == divisores){

                if (soma == numeroTeste){

                    posicao++;
                    break;

                }
                }

            i++;

        }

    }

    printf("%d", numeroTeste);

}

int main(void){

    int numero;

    scanf("%d", &numero);

    numeroNatPerfeito(numero);


}