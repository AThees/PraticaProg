// Faça uma função que receba um número inteiro e imprima o número lido é par ou impar.

#include <stdio.h>

int main(void){

    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    
    if (num % 2 == 0)

        printf("O numero %d e par", num);
    
    else 
            printf("O numero %d e impar", num);

    return 0;
}