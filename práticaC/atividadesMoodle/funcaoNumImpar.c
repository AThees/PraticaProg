#include <stdio.h>

int retorna_impares(int n1, int n2){

    int impares, i;

    impares = 0;

    if (n2 > n1){

        while (n1 <= n2){

            if (n1 % 2 != 0){

                impares++;
            }
            
            n1++;

        }

        return impares;
    }


    if (n1 > n2){

        while (n2 <= n1){

            if (n2 % 2 != 0){

                impares++;
            }
            
            n2++;

        }

            return impares;
    }


}


int main(void){

    int num1, num2, impares;

    scanf("%d", &num1);
    scanf("%d", &num2);


    impares = retorna_impares(num1, num2);

    printf("%d", impares);
}