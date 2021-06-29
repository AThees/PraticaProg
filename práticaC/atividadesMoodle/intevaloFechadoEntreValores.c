#include <stdio.h>

int main(void){

    int V_num1, V_num2;

    scanf("%d %d", &V_num1, &V_num2);

    if(V_num1 < V_num2){
        while (V_num1 <= V_num2){

            printf("%d ", V_num1);

            V_num1++;


        }
    }

    else{
        while (V_num2 <= V_num1){

        printf("%d ", V_num2);

        V_num2++;


    }

    }
}