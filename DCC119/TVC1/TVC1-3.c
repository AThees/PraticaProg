#include <stdio.h>
#define tamanho 10

void calculaEstatisticas(int vet_numDeGols[], int vet_golsSofridos[], int vet_saldoDeGols[]){

    int i, j, v_piorAtaque, v_piorDefesa, v_menosGols, v_maisSofridos;

    v_menosGols = vet_numDeGols[0];
    v_maisSofridos = vet_golsSofridos[0];
    v_piorAtaque = 0;
    v_piorDefesa = 0;




    for(i = 0; i < tamanho; i++){

        vet_saldoDeGols[i] = vet_numDeGols[i] - vet_golsSofridos[i];

    }

    for(i = 0; i < tamanho; i++){

        printf("%d\n", vet_saldoDeGols[i]);

    }


    for(i = 0; i < tamanho; i++){

        if(vet_numDeGols[i] < v_menosGols){

            v_menosGols = vet_numDeGols[i];
            v_piorAtaque = i + 1;

        }

    }


    printf("%d\n", v_piorAtaque);


    for(i = 0; i < tamanho; i++){

        if(vet_golsSofridos[i] > v_maisSofridos){

            v_maisSofridos = vet_golsSofridos[i];
            v_piorDefesa = i + 1;

        }

    }


    printf("%d\n", v_piorDefesa);

}

int main(void){

    int vet_numDeGols[tamanho], vet_golsSofridos[tamanho], vet_saldoDeGols[tamanho], i;

    for(i = 0; i < tamanho; i++){

        scanf("%d", &vet_numDeGols[i]);

    }

    for(i = 0; i < tamanho; i++){

        scanf("%d", &vet_golsSofridos[i]);

    }

    calculaEstatisticas(vet_numDeGols, vet_golsSofridos, vet_saldoDeGols);


    return 0;
}