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

    char busca[50], *nulo = '\0';

    int i, encontrou;

    memset(busca, '\0', tam);

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

        if(strstr(livros[i].titulo, busca) != nulo){
            
            livroBusca = livros[i]; 
            encontrou = 1;
            break;

        }

    }

    if(encontrou == 0){
        printf("Livro não encontrado");
    }

    else{
        puts(livroBusca.titulo);
    }











    return 0;
}