#include <string.h>
#include <stdio.h>
#define tam 300

int trocaCarac(char string[]){

    int i, trocas;

    trocas = 0;

    for(i = 0; i < strlen(string); i++){

        if(string[i] == '#'){

            string[i] = 'r';

            trocas++;

        }

    }


    return trocas;
}

int main(void){

    char string[tam];

    int trocas;

    memset(string,'\0', tam);

    fgets(string, tam, stdin);

    trocas = trocaCarac(string);

    printf("String corrigida: %s", string);

    printf("Foram corrigidos %d caracteres.", trocas);

    return 0;
}