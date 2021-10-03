#include <stdio.h>

float modalidadeBonus(int dados[][3], float recursos[], int numModalidades){

    int i, j, maisAlto;

    float valorMaisAlto;

    valorMaisAlto = recursos[0];

    for(i = 0; i < numModalidades; i++){

        for(j = 0; j < 3; j++){

            recursos[i] = (dados[i][0] + dados[i][1] + dados[i][2]) * 30000;

            if(dados[i][0] == 0){

                recursos[i] = recursos[i] + 100000;

            }

        }

    }

    for(i = 0; i < numModalidades; i++){

        if(recursos[i] > valorMaisAlto){

            valorMaisAlto = recursos[i];

        }

    }

    return valorMaisAlto;
}

int main(void){

    int numModalidades, i, j;

    scanf("%d", &numModalidades);

    float recursos[numModalidades], soma, retorno;

    int dados[numModalidades][3];

    soma = 0;

    for(i = 0; i < numModalidades; i++){

        for(j = 0; j < 3; j++){

            scanf("%d", &dados[i][j]);

        }

    }

    retorno = modalidadeBonus(dados, recursos, numModalidades);

    printf("Maior investimento a ser pago: R$%.2f\n", retorno);

    for(i = 0; i < numModalidades; i++){

        if(dados[i][0] == 0){

            printf("Modalidade: %d\n", i);

        }


        }

    return 0;

}

