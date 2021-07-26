#include <stdio.h>
#define tamanho 100

int main(void){

    int vet_vetor[tamanho], i, v_num, v_ultimoI, v_iDoPrint;

    v_iDoPrint = 3;

    scanf("%d", &v_num);

    for(i = 0; v_num >= 0; i++){

        if (v_num >= 0){

            v_ultimoI = i;

        }

        vet_vetor[i] = v_num;

        scanf("%d", &v_num);

    }

    if(i < 6){

        printf("O vetor possui menos de 6 valores! A inversao das posicoes nao eh possivel!");
        return 0;
    }

    printf("%d %d %d ", vet_vetor[v_ultimoI], vet_vetor[v_ultimoI - 1], vet_vetor[v_ultimoI - 2]);

    if(i > 6){ 
    while(v_iDoPrint < i - 3){

        printf("%d ", vet_vetor[v_iDoPrint]);

        v_iDoPrint++;

    }
    }
    printf("%d %d %d ", vet_vetor[2], vet_vetor[1], vet_vetor[0]);

    return 0;
}