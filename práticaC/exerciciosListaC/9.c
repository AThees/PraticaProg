// Faça uma função que receba um número inteiro e teste se o valor lido termina com 0 (divisível por 10).
// Em caso positivo, exiba a metade deste número. Caso contrário, exibir a mensagem "O número digitado
// não termina com 0".

#include <stdio.h>

int main(void){

    int num;

    printf("Insira um numero: ");
    scanf("%d",&num);

    if (num % 10 == 0)
        printf("%d",num/2);

    else 
        printf("essse numero nao termina com 0");

    return 0;
}