#include <stdio.h>

void preenche(int origem[], int destino[], int val ){

    int i, j;

    for(i = 0; i <= val; i++){

        destino[i] = origem[i];

    }

    for (j = i; j < 10; j++){

        if(j == 9){

            destino[j] = 100;
            break;

        }

        destino[j] = origem[j + 1];

    }

}



int main(void){

    int destino[10], val, i;

    int origem[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    scanf("%d", &val);

    preenche(origem, destino, val);

    for(i = 0; i < 10; i++){

        printf("%d ", destino[i]);

    }

    return 0;
}