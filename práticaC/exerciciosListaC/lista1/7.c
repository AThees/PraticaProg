// Faça uma função que receba como parâmetro uma nota de uma aluno e, se o valor for maior ou igual a
// 60, imprimir na tela "APROVADO", se for menor, imprimir "REPROVADO". Testar ainda se o valor lido foi
// maior do que 100 ou menor do que zero. Neste caso, imprimir "NOTA INVÁLIDA".

#include <stdio.h>

int main(void){

    int nota;

    printf("Insira a nota: ");
    scanf("%d", &nota);


    if (nota > 100 || nota < 0){
        printf("Nota invalida");
        return 0;

    }
    else
        if (nota >= 60)
        printf("Aprovado");
        if (nota < 60)
            printf("Reprovado");


}