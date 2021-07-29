#include <string.h>
#include <stdio.h>
#define tamanho 500

int main(void){

    int tamanhoUsado;

    char str1[tamanho], str2[tamanho];

    fgets(str1, tamanho, stdin);
    fgets(str2, tamanho, stdin);

    tamanhoUsado = strlen(str1);

    str1[tamanhoUsado - 1] = '\0';

    strcat(str1, str2);


    puts(str1);
}