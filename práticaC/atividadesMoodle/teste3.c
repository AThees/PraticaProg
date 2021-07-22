#include <stdio.h>

int main (void){

    int v_nota1, v_nota2, v_trabalho, v_aulasPerdidas, v_media;

    scanf("%d", &v_nota1);
    scanf("%d", &v_nota2);
    scanf("%d", &v_trabalho);
    scanf("%d", &v_aulasPerdidas);

    v_media = (v_nota1 * 3 + v_nota2 * 5 + v_trabalho * 2) / 10;  


    if (v_aulasPerdidas > 15){
        printf("reprovado");
        return 0;
    }

    else

        if (v_media < 6){
            printf("prova final");
            return 0;
        }


        if (v_media >= 6){
            printf("aprovado");
            return 0;
        }

    }



