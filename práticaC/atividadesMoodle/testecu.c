#include <stdio.h>
#define times 10

void estatisitcas(int vitorias[], int empates[], int pontos[]){

    int i, maisPontos1, maisPontos2, timeMaisPontos1, timeMaisPontos2;

    maisPontos1 = maisPontos2 = pontos[0];

    for (i = 0; i < times; i++){

        pontos[i] = (vitorias[i] * 3) + empates [i];

    }

    for(i = 0; i < times; i++){

        printf("%d\n", pontos[i]);

    }


    for (i = 0; i < times; i++) {

        if (pontos[i] > maisPontos1) {

            maisPontos1 = pontos[i];
            timeMaisPontos1 = i + 1;

        }
    }

    for (i = 1; i < times; i++) {

        if (pontos[i] > maisPontos2 && pontos[i] < maisPontos1){

            maisPontos2 = pontos[i];
            timeMaisPontos2 = i + 1;

            }
    }
    
    printf("%d\n%d", timeMaisPontos1, timeMaisPontos2);


}

int main(void){

    int i, vitorias[times], empates[times], pontos[times];

    for(i = 0; i < times; i++){

        scanf("%d", &vitorias[i]);

    }

    for(i = 0; i < times; i++){

        scanf("%d", &empates[i]);
        
    }

    estatisitcas(vitorias, empates, pontos);

    return 0;
}