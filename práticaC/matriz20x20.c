#include <stdio.h>
#define tam 20

int main(void){

    int mat[20][20], i, j, num, encontrou;

    encontrou = 0;


    for(i = 0; i < tam; i++){

        for(j = 0; j < tam; j++){

            scanf("%d", &mat[i][j]);

        }

    }

    scanf("%d", &num);

    for(i = 0; i < tam; i++){

        for(j = 0; j < tam; j++){

            if(mat[i][j] == num){

                encontrou = 1;
                printf("Linha: %d Coluna: %d", i, j);
                return 0;

            }

        }

    }

    if(encontrou == 0){

        printf("nao encontrado");

    }


    return 0;
}