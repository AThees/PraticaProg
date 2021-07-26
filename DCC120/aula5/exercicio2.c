#include <stdio.h>

void print_intervalos(int num1, int num2){

    int contador;

    contador = 0;

    if (num2 > num1){

        while(num1 <= num2){

            printf("%d ", num1);

            num1++;

            }
    }

    else {

        while(num1 >= num2){

            printf("%d ", num1);

            num1--;
        }

    }
}




int main(void){

    int valor1, valor2;

    scanf("%d %d", &valor1, &valor2);
    
    print_intervalos(valor1, valor2);



}