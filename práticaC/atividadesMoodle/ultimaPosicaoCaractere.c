#include <stdio.h>
#include <string.h>
#define tamanho 100

int retornaPosicao(char str[], char carac){

    int i, ultimaPosicao;

    ultimaPosicao = tamanho + 1;

    for (i = 0; str[i] != '\0'; i++){

        if(str[i] == carac){

            ultimaPosicao = i;

        }

    }

    if(ultimaPosicao != (tamanho + 1)){

        return ultimaPosicao;

    }

    else{

        return -1;

    }

    return 0;
}

int main(void){

    int retornoFun;

    char str[tamanho], caractere;

    fgets(str, tamanho, stdin);

    scanf("%c", &caractere);

    retornoFun = retornaPosicao(str, caractere);

    printf("%d", retornoFun);


    return 0;
}