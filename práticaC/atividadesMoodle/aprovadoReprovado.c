#include <stdio.h>

int main(void){

    int v_nota;

    scanf("%d", &v_nota);

    while(v_nota >= 0 && v_nota <= 100){

        if (v_nota >= 60){

            printf("Aprovado!");

        }

        if(v_nota < 60){

            printf("Reprovado!");

        }

        scanf("%d", &v_nota);

    }


}