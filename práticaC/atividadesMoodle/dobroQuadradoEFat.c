#include <stdio.h>

int main(void){

    int n, num, dobro, quadrado, fatorial, i, multiplicador;
    double numFat;

    multiplicador = 1;
    i = 0;
    numFat = 1;

    scanf("%d",&n);


    while(i < n){

        
        scanf("%d",&num);

        do{
            numFat = numFat * multiplicador;
            multiplicador++;
        } while (multiplicador<=num);

        printf("%d: %d %d %.0f\n", num, num * 2, num * num, numFat);

        i++;

    }
    

}
