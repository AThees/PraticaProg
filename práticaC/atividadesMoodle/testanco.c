#include <stdio.h>


int main(void){

    int num;

    scanf("%d", &num);

    while (1 == 1){

        if(num % 2 == 0){

            num = num / 2;

            printf("%d\n", num);

        }

        else{

            num = (num * 3) + 1;

            printf("%d\n", num);

        }

    }


return 0;
}