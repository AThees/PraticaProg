#include <stdio.h>

void inverteVetores(int vetor[], int tam){

    int i, j, vetorInverso[tam];

    for(i=0, j = tam - 1; i < tam; i++, j--){

        vetorInverso[i] = vetor[j];

    }

    for(i=0; i < tam; i++){

        printf("v[%d] = %d\n", i, vetorInverso[i]);

    }

    printf("\n");
}

int main(void){

    int i, testados, tam;

    testados = 0;

    scanf("%d", &tam);

    int vetor[tam];

    for (i = 0; i < tam; i++){

        scanf("%d", &vetor[i]);

    }

    printf("Inversao do primeiro vetor\n");    

    inverteVetores(vetor, tam); // Chama a função com os valores do primeiro vetor


    scanf("%d", &tam); // Atribui um valor novo para o tamanho para ser feita a proxima chamada

    int vetor2[tam];

    for (i = 0; i < tam; i++){

        scanf("%d", &vetor2[i]);

    }

    printf("\nInversao do segundo vetor\n");
    inverteVetores (vetor2, tam);



    scanf("%d", &tam); // Atribui um valor novo para o tamanho para ser feita a proxima chamada

    int vetor3[tam];

    for (i = 0; i < tam; i++){

        scanf("%d", &vetor3[i]);

    }

    printf("\nInversao do terceiro vetor");
    inverteVetores (vetor3, tam);

    return 0;
}