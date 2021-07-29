#include <string.h>
#include <stdio.h>


int main(void){

    int i, j;

    char primeiraLetra[2], *token, *token2;

    const char separar[2] = " ";

    char s2[100];

    memset(s2, '\0', 100);


    char s1[20] = "Joao Reinaldo ";

    token = strtok(s1, separar);

    while( token != NULL ) {


    
    token = strtok(NULL, separar);

    printf("%s", token);

}


}



