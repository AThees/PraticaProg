#include <stdio.h>

int main(void){

    int i, notasDadas, j;
    float somaNotas[4], media, notaTotal, nota ;

    for (i = 0; i < 4; i++){

        notasDadas = 0;
        notaTotal= 0;

            for(notasDadas = 0; notasDadas < 3; notasDadas++){

                scanf("%f", &nota);
                
                notaTotal = notaTotal + nota;
            }

        somaNotas[i] = notaTotal;

    }

    for(j = 0; j < 4; j++){

        media = 0;

        media = somaNotas[j]/(float)3;

        printf("Média Aluno 0%d: %.1f\n", j+1, media);

    }

return 0;
}