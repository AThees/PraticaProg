#include <stdio.h>

int teste_Valores(int n){

    int resposta;
    int i;
    float num;

    i = 0;
    resposta = 0;

    while(i < n){

        printf("Digite num: ");
        scanf("%f", &num);

        if (num < 0){
            resposta++;
        }

        i++;
    }


    return resposta;

}

int main(void){

    int qtdNumeros, resp;
    scanf("%d", &qtdNumeros);

    resp = testeValores(qtdNumeros);
    printf("Foram lidos %d valores negativos.", resp);
}