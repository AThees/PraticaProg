#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Ponto;

    Ponto funcMaisProximo(Ponto p1, Ponto p2){

        int distanciaP1, distanciaP2;

        distanciaP1 = sqrt(pow(p1.x - 0, 2) + pow(p1.y - 0, 2));

        distanciaP2 = sqrt(pow(p2.x - 0, 2) + pow(p2.y - 0, 2));

        if(distanciaP1 < distanciaP2){

            return p1;

        }

        if(distanciaP2 < distanciaP1){

            return p2;

        }

    return p1;
}





int main(void){

    Ponto p1, p2, p3, p4, maisProximoParcial1, maisProximoParcial2, maisProximo;

    scanf("%d", &p1.x);
    scanf("%d", &p1.y);

    scanf("%d", &p2.x);
    scanf("%d", &p2.y);

    scanf("%d", &p3.x);
    scanf("%d", &p3.y);

    scanf("%d", &p4.x);
    scanf("%d", &p4.y);

    maisProximoParcial1 = funcMaisProximo(p1, p2);

    maisProximoParcial2 = funcMaisProximo(p3, p4);

    maisProximo = funcMaisProximo(maisProximoParcial1, maisProximoParcial2);

    printf("Mais Próximo: (%d,%d)", maisProximo.x, maisProximo.y);


    return 0;
}