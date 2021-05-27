// Faça uma função que receba a quantidade de quilowatts consumido em uma casa e calcule o valor a ser
// pago de energia elétrica, sabendo-se que o valor a pagar por quilowatt é de R$ 0,46. Apresentar o valor
// total a ser pago pelo usuário acrescido de 18% de ICMS.
#include <stdio.h>

int main(void){

    int kw, valorSemImposto, valor;

    printf("Quilowatts consumidos: ");
    scanf("%d", &kw);

    valorSemImposto = kw * 0.46;

    valor = valorSemImposto + valorSemImposto * .18;

    printf("O valor a ser pago e: %d", valor);
}