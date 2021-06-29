#include <stdio.h>

void f_testaNumero(int num){

    if (num % 10 == 0){

        printf("%d", num / 2);

    }

    else{

        printf("O numero digitado nao termina com 0");

    }

}

int main(void){

    int numero;

    scanf("%d", &numero);

    f_testaNumero(numero);
}