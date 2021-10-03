#include <stdio.h>
#include <string.h>
#define tam 10

typedef struct{

    char nome[20];
    char rua[50];
    char numero[10];
    char bairro[20];
    char complemento[50];
    char cep[12];
    char cidade[25];
    char uf[3];
    char telefone1[15];
    char telefone2[15];

} Dados;

int main(void){

    Dados todos[tam];

    int i;

    for(i = 0; i < tam; i++){

        memset(todos[i].nome, '\0', 20);
        memset(todos[i].rua, '\0', 50);
        memset(todos[i].numero, '\0', 10);
        memset(todos[i].bairro, '\0', 20);
        memset(todos[i].complemento, '\0', 50);
        memset(todos[i].cep, '\0', 12);
        memset(todos[i].cidade, '\0', 25);
        memset(todos[i].uf, '\0', 3);
        memset(todos[i].telefone1, '\0', 15);
        memset(todos[i].telefone2, '\0', 15);

    }

    for(i = 0; i < tam; i++){

        fgets(todos[i].nome, 20, stdin);
        fgets(todos[i].rua, 50, stdin);
        fgets(todos[i].numero, 10, stdin);
        fgets(todos[i].bairro, 20, stdin);
        fgets(todos[i].complemento, 50, stdin);
        fgets(todos[i].cep, 12, stdin);
        fgets(todos[i].cidade, 25, stdin);
        fgets(todos[i].uf, 3, stdin);
        fgets(todos[i].telefone1, 15, stdin);
        fgets(todos[i].telefone2, 15, stdin);

    }

    for(i = 0; i < tam; i++){

        printf("%s",todos[i].nome);
        printf("%s",todos[i].rua);
        printf("%s",todos[i].numero);
        printf("%s",todos[i].bairro);
        printf("%s",todos[i].complemento);
        printf("%s",todos[i].cep);
        printf("%s",todos[i].cidade);
        printf("%s",todos[i].uf);
        printf("%s",todos[i].telefone1);
        printf("%s",todos[i].telefone2);

    }

    return 0;
}