#include <stdio.h>

int retornaMaior(int vetor[], int tam){

    int i, maiorNum, j, aux;

    for(i = 0; i <= (tam - 2); i++){

        for(j = tam - 1; j > i; j--){

            if ( vetor [j] < vetor [j - 1]){

                aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
            }

        }

    }

    return vetor[tam - 1];

}

int main(void){

    int tamanho, i, maiorNum;

    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (i = 0; i < tamanho; i++){

        scanf("%d", &vetor[i]);

    }

    maiorNum = retornaMaior(vetor, tamanho);

    printf("%d", maiorNum);


}