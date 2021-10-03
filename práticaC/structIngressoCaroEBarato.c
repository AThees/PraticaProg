#include <stdio.h>
#include <string.h>
#include <string.h>
#define tam 4

typedef struct{

    char nomeDoEvento[50];
    char local[50];
    float preco;

} Evento;

int main(void){

    Evento eventos[tam];

    int i;

    Evento maisBarato, maisCaro;

    for(i = 0; i < tam; i++){

        memset(eventos[i].nomeDoEvento, '\0', 50);
        memset(eventos[i].local, '\0', 20);

    }

    for(i = 0; i < tam; i++){

        fgets(eventos[i].nomeDoEvento, 50, stdin);
        fgets(eventos[i].local, 50, stdin);
        scanf("%f%*c", &eventos[i].preco);  

        if(eventos[i].nomeDoEvento[strlen(eventos[i].nomeDoEvento) - 1] == '\n'){

            eventos[i].nomeDoEvento[strlen(eventos[i].nomeDoEvento) - 1] = '\0';

        }

        if(eventos[i].local[strlen(eventos[i].local) - 1] == '\n'){

            eventos[i].local[strlen(eventos[i].local) - 1] = '\0';

        }  
        
    }

    for(i = 0; i < tam; i++){

        memset(maisBarato.nomeDoEvento, '\0', 50);
        memset(maisBarato.local, '\0', 20);

        memset(maisCaro.nomeDoEvento, '\0', 50);
        memset(maisCaro.local, '\0', 20);

    }

    maisBarato = eventos[0];

    maisCaro = eventos[0];

    for(i = 0; i < tam; i++){

        if(eventos[i].preco < maisBarato.preco){

            maisBarato = eventos[i];

        }

    }

    for(i = 0; i < tam; i++){

        if(eventos[i].preco > maisCaro.preco){

            maisCaro = eventos[i];

        }
    

    }

    printf("Mais Barato: %s (R$ %.2f)\n", maisBarato.nomeDoEvento, maisBarato.preco);

    printf("Mais Caro: %s (R$ %.2f)", maisCaro.nomeDoEvento, maisCaro.preco);

    return 0;
}