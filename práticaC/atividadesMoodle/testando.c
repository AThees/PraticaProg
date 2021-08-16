#include <stdio.h>
#include <string.h>

int main(void){

    char str[] = "eu gosto de banana";

    char busca[] = "banana";

    if(strstr(str, "banana") == '\0'){
        printf("contem");
    }

}