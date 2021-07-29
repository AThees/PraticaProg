#include <string.h>
#include <stdio.h>
#define tam 100

void nome2abreviado(char s1[], char s2[]){

    int i, j, ultimoEspaco;

    ultimoEspaco = 0;

    char ultimoNome[tam];

    memset(ultimoNome, '\0', tam);

    for(i = 0; s1[i] != '\0'; i++) {  // Define a posição do último espaço na string

        if(s1[i] == ' '){

            ultimoEspaco = i;

        }

    }

    for(i=0, j = 0; s1[i] != ' '; i++, j++) {  // Copia o primeiro nome completo

        s2[j] = s1[i]; 

    }

    strcat(s2, " ");

    j++;


    if(ultimoEspaco != 0){

        for(i=0; i < ultimoEspaco; i++){  //Abrevia os nomes do meio 

            if(s1[i] == ' '){

                s2[j] = s1[i + 1];

                strcat(s2, ". ");

                j = j + 3;

            }

        }

        ultimoNome[0] = s1[ultimoEspaco + 1];  // Define a primeira letra do último nome

        for (j = 1, i = ultimoEspaco + 2; i < strlen(s1) ; i++, j++){  // Copia o resto do ultimo nome

            ultimoNome[j] = s1[i];

        }    

        for(i = 1; ultimoNome[i] != '\0'; i++){  // Transforma o resto das letras do ultimo nome em maiusculas

            ultimoNome[i] = ultimoNome[i] - 32;

        }

        strcat(s2, ultimoNome);  // Junta o ultimo nome com o resto da string

    }

}

void semAbrev(char s1[], char s3[]){

    int i, j, ultimoEspaco;

    ultimoEspaco = 0;

    char ultimoNome[tam];

    memset(ultimoNome, '\0', tam);

    for(i = 0; s1[i] != '\0'; i++) {  // Define a posição do último espaço na string

        if(s1[i] == ' '){

            ultimoEspaco = i;

        }

    }

    ultimoNome[0] = s1[ultimoEspaco + 1];  // Define a primeira letra do último nome

    for (j = 1, i = ultimoEspaco + 2; i < strlen(s1) ; i++, j++){  // Copia o resto do ultimo nome

        ultimoNome[j] = s1[i];

    }    

    for(i = 1; ultimoNome[i] != '\0'; i++){  // Transforma o resto das letras do ultimo nome em maiusculas

        ultimoNome[i] = ultimoNome[i] - 32;

    }

        strcat(s3, ultimoNome);  // Junta o ultimo nome com o resto da string

        strcat(s3, ", ");

    for(i = 0, j = strlen(s3); i < ultimoEspaco; i++, j++){

        s3[j] = s1[i];

    }

}

void tudoAbrev(char s1[], char s4[]){

    int i, j, ultimoEspaco;

    ultimoEspaco = 0;

    char ultimoNome[tam], primeiraLetra[2];

    memset(ultimoNome, '\0', tam);

    for(i = 0; s1[i] != '\0'; i++) {  // Define a posição do último espaço na string

        if(s1[i] == ' '){

            ultimoEspaco = i;

        }

    }

    ultimoNome[0] = s1[ultimoEspaco + 1];  // Define a primeira letra do último nome

    for (j = 1, i = ultimoEspaco + 2; i < strlen(s1) ; i++, j++){  // Copia o resto do ultimo nome

        ultimoNome[j] = s1[i];

    }    

    for(i = 1; ultimoNome[i] != '\0'; i++){  // Transforma o resto das letras do ultimo nome em maiusculas

        ultimoNome[i] = ultimoNome[i] - 32;

    }

        strcat(s4, ultimoNome);  // Junta o ultimo nome com o resto da string

        strcat(s4, ", ");

    primeiraLetra[0] = s1[0];

    strcat(s4, primeiraLetra);
    strcat(s4, ".");

    j = strlen(s4);

    if(ultimoEspaco != 0){

        for(i=0; i < ultimoEspaco; i++){  //Abrevia os nomes do meio 

            if(s1[i] == ' '){

                s4[j] = s1[i + 1];

                strcat(s4, ".");

                j = j + 2;

            }

        }

}

}

int main(void){

    char s1[tam], s2[tam], s3[tam], s4[tam];

    memset(s1, '\0', tam);

    memset(s2, '\0', tam);

    memset(s3, '\0', tam);

    memset(s4, '\0', tam);



    fgets(s1, tam, stdin);

    s1[strlen(s1) - 1] = '\0';

    nome2abreviado(s1,s2);

    printf("%s\n", s2);

    semAbrev(s1, s3);

    printf("%s\n", s3);

    tudoAbrev(s1, s4);

    printf("%s", s4);

    return 0;
}