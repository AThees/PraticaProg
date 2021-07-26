// Faça uma função que imprima se um número real recebido como parâmetro é positivo, negativo ou
// neutro (zero).   

#include <stdio.h>

int main(void){

    int num;

    printf("Insira um numero:");
    scanf("%d", &num);

    if (num == 0){

        printf("Neutro");
    }
    if (num > 0){

        printf("Positivo");
    }

    if (num < 0){

        printf("Negativo");
    }





}