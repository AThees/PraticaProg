#include <stdio.h>

int f_retornaSoma(int n1, int n2){

    int soma;

    soma = 0;

    if(n1 == n2){
        soma = n1;
        return soma;
    }

    if (n2 > n1){

        while(n1 <= n2){

            soma = soma + n1;

            n1++;

        }

            return soma;
            
    }

    if (n1 > n2){

        while(n2 <= n1){

            soma = soma + n2;

            n2++;

        }

            return soma;
    }

    return 0;
}

int main(void){

    int v_num1, v_num2, result;

    scanf("%d", &v_num1);
    scanf("%d", &v_num2);


    result = f_retornaSoma(v_num1, v_num2);

    printf("%d", result);
}