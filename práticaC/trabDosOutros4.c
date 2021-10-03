#include <stdio.h>
#define tam 1000

int main(void){

    char lista[tam];

    int i, virgulas;

    virgulas = 0;

    fgets(lista, tam, stdin);

    for(i = 0; i < tam; i++){

        if(lista[i] == ','){

            lista[i] = '\n';

            virgulas++;

        }

    }

    printf("Quantidade de musicas: %d.\n", virgulas + 1);
    printf("Playlist:\n ");
    printf("%s", lista);
    


    return 0;
}

