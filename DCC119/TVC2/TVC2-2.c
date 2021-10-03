#include <stdio.h>

float fun_calculaMedalhas(int mat_medalhas[][6], int vet_diferencaMedalhas[], int i_numModalidades){

    int i, j, houveAumento, soma;

    float media;

    houveAumento = 0;
    soma = 0;

    for(i = 0; i < i_numModalidades; i++){

        vet_diferencaMedalhas[i] = (mat_medalhas[i][3] + mat_medalhas[i][4] + mat_medalhas[i][5]) - (mat_medalhas[i][2] + mat_medalhas[i][1] + mat_medalhas[i][0]);

    }

    for(i = 0; i < i_numModalidades; i++){

        if(vet_diferencaMedalhas[i] > 0){

            houveAumento++;

            soma = soma + (mat_medalhas[i][5] + mat_medalhas[i][4] + mat_medalhas[i][3]);

        }

    }

    media = (float)soma / (float)houveAumento;

    return media;

} 

int main(void){

    int i_numModalidades, i, j;

    float f_retorno;

    scanf("%d", &i_numModalidades);

    int mat_medalhas[i_numModalidades][6], vet_diferencaMedalhas[i_numModalidades];

    for (i = 0; i < i_numModalidades; i++){

        for(j = 0; j < 6; j++){

            scanf("%d", &mat_medalhas[i][j]);

        }

    }

    f_retorno = fun_calculaMedalhas(mat_medalhas, vet_diferencaMedalhas, i_numModalidades);

    for (i = 0; i < i_numModalidades; i++){

        if(vet_diferencaMedalhas[i] > 0){

            printf("Modalidade indice %d, aumento de %d medalhas\n", i, vet_diferencaMedalhas[i]);

        }

    }

    printf("Valor retornado pela funcao: %.2f", f_retorno);


    return 0;
}