#include <stdio.h>
#define tamanho 10

int f_resultado(int j1[], int j2[], int r[]){

    int i;

    i = 0;
    r[0] = 0;
    r[1] = 0;

    for(i = 0; i < 10; i++){
        
    if((j1[i] + j2[i]) % 2 == 0){

        r[0]++;

    }

    else {

        r[1]++;

    }
    
    
}
    return 0;

}





int main(void){

    int j1[tamanho], j2[tamanho], r[2], i;

    for(i = 0; i < 10; i++){

        scanf("%d", &j1[i]);

    }

    

    for(i = 0; i < 10; i++){

        scanf("%d", &j2[i]);

    }

    f_resultado(j1, j2, r);

    printf("Jogador 1: %d\nJogador 2: %d", r[0], r[1]);

    return 0;
}