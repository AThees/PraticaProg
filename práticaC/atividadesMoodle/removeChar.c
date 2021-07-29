    #include <stdio.h>
    #include <string.h>
    #define tam 100

    int main(void){

        int i, tamanhoUsado, remocoes, j;

        char str[tam], strDest[tam], caractere;

        memset (strDest, '\0', tam);


        remocoes = 0;

        fgets(str, tam, stdin);

        scanf("%c", &caractere);

        tamanhoUsado = strlen(str);

        str[tamanhoUsado - 1] = '\0';

        for(i = 0, j = 0; str[i] != '\0'; i++){

            if(str[i] == caractere){

                remocoes++;

            }

            if(str[i] != caractere){

                strDest[j] = str[i];
                j++;

            }

        }


        printf("Numero de remocoes: %d\nString sem o caractere '%c': %s", remocoes, caractere, strDest);


        return 0;
    }