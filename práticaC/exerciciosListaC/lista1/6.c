//  Crie uma função que retorne a média de combustível gasto pelo usuário. Esta função receberá a
// quantidade de quilômetros rodados e a quantidade de combustível consumido.
#include <stdio.h>

int main(void){

    int km, combustivel;

    printf("quilometros rodados: ");
    scanf("%d", &km);

    printf("combustivel consumido: ");
    scanf("%d", &combustivel);

    printf("A media de combustivel gasto e de: %d Km/L", km/combustivel);


    return 0;
}