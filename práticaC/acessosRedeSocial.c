#include <stdio.h>

int calculaMedias(int acessos[][100], float medias[], int numPessoas, int numDias){

    int i, j;

    int soma;

    for(i = 0; i < numPessoas; i++){

        soma = 0;

        for(j = 0; j < numDias; j++){

            soma = soma + acessos[i][j];

        }

        medias[i] = soma / (float)numDias;

    }

    printf("%.1f", medias[3]);

    return 0;
}

int main(void){

    int numPessoas, numDias, i, j;

    scanf("%d", &numPessoas);

    scanf("%d", &numDias);

    float medias[numPessoas];

    int acessos[numPessoas][numDias];

    for (i = 0; i < numPessoas; i++){

        for(j = 0; j < numDias; j++){

            scanf("%d", &acessos[i][j]);

        }

    }

    calculaMedias(acessos, medias, numPessoas, numDias);

    return 0;
}