#include <stdio.h>
#include <string.h>
#define tam 6

typedef struct{

    char titulo[50];
    char autor[30];
    int codigo;
    float preco;

} Livro;

int main(void){

    Livro livros[tam];

    Livro livroBusca;

    char busca[50], *resultado;

    int i, contem;

    for(i = 0; i < tam; i++){

        fgets(livros[i].titulo , 50, stdin);

        fgets(livros[i].autor , 30, stdin);

        scanf("%d", &livros[i].codigo);
        getchar();

        scanf("%f", &livros[i].preco);
        getchar();

    }

    fgets(busca, 50, stdin);

    for(i = 0; i < tam; i++){

        contem = 0;

        resultado = strstr(livros[i].titulo, busca);

        if(resultado =! '\0'){

            livroBusca = livros[i];
            break;

        }

        else{

            continue;

        }




    }

    printf("%s", livroBusca.titulo);











    return 0;
}