#include <stdio.h>
#define filiais 5
#define numProdutos 10

typedef struct{

    char s_nome[20];

    float vet_precos[numProdutos];

} filial;

int fun_reajustaPreco(filial vet_lojas[], int j){

    int i_acimaDe10;

    int i;

    i_acimaDe10 = 0;

    for(i = 0; i < numProdutos; i++){

        vet_lojas[j].vet_precos[i] = vet_lojas[j].vet_precos[i] * 1.05;

            if(vet_lojas[j].vet_precos[i] > 10){

                i_acimaDe10++;

            }

    }

    for(i = 0; i < numProdutos; i++){

        printf("Produto %d: %.2f\n", i, vet_lojas[j].vet_precos[i]);

    }

    return i_acimaDe10;

}

int main(void){

    int i, j, i_retorno;

    filial vet_lojas[filiais];

    for(i = 0; i < filiais; i++){

        fgets(vet_lojas[i].s_nome, 20, stdin);

            for(j = 0; j < numProdutos; j++){

                scanf("%f", &vet_lojas[i].vet_precos[j]);
                getchar();

            }


    }

    scanf("%d", &j);

    i_retorno = fun_reajustaPreco(vet_lojas, j);

    if(i_retorno == 0){

        printf("Nenhum produto custou acima de R$10,00 após o reajuste");

    }

    else{

        printf("%d produtos custam mais de R$ 10.00 na filial.", i_retorno);

    }

    return 0;
}