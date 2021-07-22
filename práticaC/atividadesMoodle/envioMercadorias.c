#include <stdio.h>

void calculaPrecoEntrega(int qtdMin, int qtdCaixas){

    float valorFinal;

    if (qtdCaixas < qtdMin){

        printf("Pedido recusado.\n");
        return;

    }

    else{

        valorFinal = qtdCaixas * 20;

        printf("Valor da entrega: R$ %.2f (%d Caixas)\n", valorFinal, qtdCaixas);

    }


}

int main(void){

    int qtdMinima, qtdCaixas;

    scanf("%d", &qtdMinima);
    scanf("%d", &qtdCaixas);



    while(qtdCaixas != 0){

        calculaPrecoEntrega(qtdMinima, qtdCaixas);

        scanf("%d", &qtdCaixas);

    }


    return 0;
}