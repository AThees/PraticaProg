#include <stdio.h>

int main(void){

    int i, tamanho;

    float media, soma;

    soma = 0;

    scanf("%d", &tamanho);

    float vetor[tamanho];

    for(i = 0; i < tamanho; i++){

        scanf("%f", &vetor[i]);

    }

    for(i = 0; i < tamanho; i++){

        soma = soma + vetor[i];

    }

    media = (float)soma / (float)tamanho;

    printf("Media = %.2f", media);

    return 0;
}