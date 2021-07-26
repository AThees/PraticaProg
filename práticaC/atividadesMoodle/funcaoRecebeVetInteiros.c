#include <stdio.h>
#define tam 5

int main(void){

    int vetor[tam], i, j, a;

    i = 0;

    for(i = 0; i < tam; i++){

        scanf("%d", &vetor[i]);
        
    }

    for (i = 0; i < tam; i++){

        for(j = i + 1; j < tam ; j++){

            if (vetor[i] > vetor[j]){

                a = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = a;

            }

        }

    }

    for (i = 0; i < tam; i++){
        printf("%d\n", vetor[i]);
    }


return 0;
}