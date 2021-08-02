// Faça uma função que receba um número inteiro e imprima o número lido é par ou impar.
#include <stdio.h>

int main() {

    int numero;

    printf("Insira um numero: "); 
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("O numero é par");
    
    else
        printf("O numero é impar");

}