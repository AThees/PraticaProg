// Faça uma função que converta uma quantidade de horas digitadas pelo usuário em minutos e retorne
// esta quantidade. Faça a leitura da quantidade de horas na função principal.
#include <stdio.h>

int main(void){

    int horas, minutos;

    printf("Insira um numero de horas: ");
    scanf("%d",&horas);

    minutos = horas * 60;

    printf("Existem %d minutos em %d horas.", minutos, horas);


}