#include <stdio.h>
#include <string.h>
#define tam 500

int trocaPraMaiusculo(char string[]){

    int i, trocas;

    trocas = 0;

    if(string[0] >= 'a' && string[0] <= 'z'){

        string[0] = string[0] - 32;

        trocas++;

    }

    for (i = 0; i < strlen(string); i++){

        if(string[i] == '.' || string[i] == '!' || string[i] == '?' && string[i + 2] >= 'a' && string[i + 2] <= 'z'){

            string[i + 2] = string[i + 2] - 32;

            trocas++;

        }

    }


    return trocas;
}

int main(void){

    int retorno;

    char string[tam];

    memset(string, '\0', tam);

    fgets(string, tam, stdin);

    string[strlen(string) - 1] = '\0';

    retorno = trocaPraMaiusculo(string);

    puts(string);

    printf("%d caracteres foram passados para maiusculo", retorno);

    return 0;
}