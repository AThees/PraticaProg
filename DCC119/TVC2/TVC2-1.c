#include <stdio.h>
#include <string.h>
#define tam 500

int fun_encontraAliteracao(char s_frase[]){

    int i, i_aliteracoesEncontradas;
    char c_analizando, c_primeiraLetraPalavra1, c_primeiraLetraPalavra2;

    i_aliteracoesEncontradas = 0;

    c_primeiraLetraPalavra1 = s_frase[0];

    for(i = 0; i < strlen(s_frase); i++){

        if(s_frase[i] == ' '){

            c_primeiraLetraPalavra2 = s_frase[i + 1]; 

            if(c_primeiraLetraPalavra1 == c_primeiraLetraPalavra2){

                i_aliteracoesEncontradas++;

            }

        }

        c_primeiraLetraPalavra1 = c_primeiraLetraPalavra2;

    }



    return i_aliteracoesEncontradas;

}

int main(void){

    int retorno;

    char s_frase[tam];

    retorno = 0;

    fgets(s_frase, tam, stdin);

    s_frase[strlen(s_frase) - 1] = '\0';

    retorno = fun_encontraAliteracao(s_frase);

    printf("aliteracoes encontradas: %d", retorno);

    return 0;
}