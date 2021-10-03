#include <stdio.h>
#include <string.h>
#define tam 300

int retornaEncontrados(int ind, char frase[]){

    char numeros[] = "0123456789";

    int i, j, tamanhoString, encontrados;

    encontrados = 0;

    tamanhoString = strlen(frase) + 1;

    if(ind > tamanhoString){

        return -1;

    }

    else{

        for(i = ind; i < tamanhoString; i++){

            if(frase[i] == '\0'){

                break;

            }

            for(j = 0; j < 10; j++){

                if(frase[i] == numeros[j]){

                    encontrados++;
                    break;

                }

            }

        }

        return encontrados;
    
    }

}

int main(void){

    int ind, retorno;

    char frase[tam];

    memset(frase, '\0', tam);

    fgets(frase, tam, stdin);

    frase[strlen(frase) - 1] = '\0';

    scanf("%d", &ind);

    retorno = retornaEncontrados(ind, frase);

    if(retorno == -1){

        printf("Texto finalizado antes da posicao indicada");

    }

    else{

        printf("Foram encontrados %d digitos no texto apos a posicao indicada", retorno);

    }




    return 0;
}