#include <stdio.h>
#include <string.h>
#define tamanho 300

int main(void){

    int k, i, tamanhoUsado;

    char str[300];

    fgets(str, tamanho, stdin);

    tamanhoUsado = strlen(str);

    str[tamanhoUsado - 1] = '\0';

    scanf("%d", &k);

    for(i = 0; str[i] != '\0'; i++){

        str[i] = str[i] + k;

    }

    printf("Mensagem criptografada: %s", str);

}
