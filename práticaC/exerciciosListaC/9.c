// Faça uma função que receba um número inteiro e teste se o valor lido termina com 0 (divisível por 10).
// Em caso positivo, exiba a metade deste número. Caso contrário, exibir a mensagem "O número digitado
// não termina com 0".
#include <stdio.h>

int main(void){

    int jorge;

    printf("Insira a porra\n de um numero: ");
    scanf("%d", jorge);

    if (jorge % 10 == 0)
        
        printf("%d", jorge/2);
    else
        printf("O numero digitado nao termina com 0");

}