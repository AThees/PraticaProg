#include <stdio.h>


int main(void){

    float mat[4][3], somaLinhas, somaColunas;

    int i, j;

    somaColunas = 0;

    for(i = 0; i < 4; i++){

        for(j = 0; j < 3; j++){

            scanf("%f", &mat[i][j]);

        }

    }

    printf("Somas:\n");

    for(i = 0; i < 4; i++){

        somaLinhas = 0;

        for(j = 0; j < 3; j++){

            somaLinhas = somaLinhas + mat[i][j];

        }

        printf("-> Linha 0%d: %.2f\n", i, somaLinhas);

    }

    printf("\nMédias:\n");

    for(j = 0; j < 3; j++){

        somaColunas = 0;

        for(i = 0; i < 4; i++){

            somaColunas = somaColunas + mat[i][j];

        }

        printf("-> Coluna 0%d: %.2f\n", j, (somaColunas / 4));

    }



    return 0;
}