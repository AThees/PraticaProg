#include <stdio.h>
#include <string.h>

int main(void){

    int i;

    char nome[100] = "alvaro";

    char nome2[100];

    memset(nome2, '\0', 100);

    for(i = 0; nome[i] != '\0'; i++){

        nome2[i] = nome[i] - 32;

    }

    printf("%s", nome2);










    return 0;
}
