#include <stdio.h>

int main(void){

    int v_num1, v_num2;

    scanf("%d %d", &v_num1, &v_num2);


    if (v_num2 > v_num1){
    while(v_num1 <= v_num2){

        if(v_num1 % 11 == 5){

            printf("%d\n", v_num1);

        }

        v_num1++;


    }

    return 0;
}

    if (v_num1 > v_num2){
    while(v_num2 <= v_num1){

        if(v_num2 % 11 == 5){

            printf("%d\n", v_num2);

        }

        v_num2++;


    }

}





}