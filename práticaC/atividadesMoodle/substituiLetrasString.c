#include <stdio.h>
#include <string.h>
#define tamanho 100

int trocaLetras(char str[]){

    int tamanhoString, trocadas, i;

    trocadas = 0;

    tamanhoString = strlen(str);

    for(i = 0; i <= tamanhoString; i++){

        if (str[i] == 'a'){

            str[i] = 'b';
            trocadas++;
            
        }

        
    }

    return trocadas;
}


int main(void){

    int retornoFun;

    char string[tamanho];

    fgets(string, tamanho, stdin);

    retornoFun = trocaLetras(string);

    printf("%sCaracteres Modificados: %d", string, retornoFun);

    return 0;
}