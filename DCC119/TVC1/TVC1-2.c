#include <stdio.h>

void pesoEmbalagens(int v_pesoMin, int v_pesoMax){

    int v_embalagensFora, v_pesoEmbalagem;

    v_embalagensFora = 0;

    scanf("%d", &v_pesoEmbalagem);

    while(v_pesoEmbalagem >= 0){

        if (v_pesoEmbalagem > v_pesoMax || v_pesoEmbalagem < v_pesoMin){

            v_embalagensFora++;

        }

        scanf("%d", &v_pesoEmbalagem);

    }

    printf("Embalagens fora do peso: %d", v_embalagensFora);

}

int main(void){

    int v_pesoMin, v_pesoMax;

    scanf("%d", &v_pesoMin);
    scanf("%d", &v_pesoMax);

    pesoEmbalagens(v_pesoMin, v_pesoMax);

    return 0;
}