#include <stdio.h>
#include <string.h>
#define tamanho 1000

int organizaString(char string[]){

    int i, tamanhoFinal;

    for(i = strlen(string); i > 0 - 2; i--){

        string[i + 1] = string[i];

    }

    string[0] = string[strlen(string) - 1];

    string[strlen(string) - 1] = '\0';


    tamanhoFinal = strlen(string);

}

int main(void){

    char string[tamanho];

    int retorno;

    fgets(string, tamanho, stdin);

    string[strlen(string) - 1] = '\0';

    organizaString(string);

    printf("String corrigida: %s\n", string);

    printf("Tamanho da string: %d caracteres", organizaString(string));

    return 0;
}