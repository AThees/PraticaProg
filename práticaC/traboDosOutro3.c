#include <stdio.h>
#include <string.h>
#define filiais 5
#define qtdProdutos 10

typedef struct{

    char nome[20];

    int estoque;

    int unidades[qtdProdutos];

}filial;

void funcaoEstoque(filial lojas[], int i){

    float ocupacao;

    int j;
    
    for(j = 0; j < filiais; j++){   

        ocupacao = (100 * lojas[j].unidades[i]) / (float)lojas[j].estoque;

        printf("O produto %d ocupa %.1f%% na filial %s", i, ocupacao, lojas[j].nome);

        if(ocupacao < 5){

        printf("O estoque do produto esta baixo na filial!\n");

        }

    }



}

int main(void){

    filial lojas[filiais];

    int i, j;

    for(i = 0; i < filiais; i++){

        fgets(lojas[i].nome, 20, stdin);

        scanf("%d", &lojas[i].estoque);
        getchar();

        for(j = 0; j < qtdProdutos; j++){

            scanf("%d", &lojas[i].unidades[j]);
            getchar();

        }

    }

    scanf("%d", &i);

    funcaoEstoque(lojas, i);



    return 0;
}