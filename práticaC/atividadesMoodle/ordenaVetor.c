#include <stdio.h>
#define tam 5


int main(void){

    int i, j, vetor[tam], aux;

    for(i = 0; i < tam; i++){

        scanf("%d", &vetor[i]);

    }

    for(i = 0; i <= (tam - 2); i++){

        for(j = tam - 1; j > i; j--){

            if ( vetor [j] < vetor [j - 1]){

                aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
            }

        }

    }
    

    for (i = 0; i < tam; i++){

        printf("%d\n", vetor[i]);

        }

    return 0;
}