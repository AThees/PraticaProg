// Crie uma função que calcule o aumento que será dado a um funcionário. Esta função receberá como
// parâmetro o salário atual do funcionário e a porcentagem de aumento. A função deverá, ao final, imprimir
// o novo valor do salário e o valor do aumento.
#include <stdio.h>


int main(void){
    
    int salarioInicial, porcentagem;

    printf("Qual o salario atual: ");
    scanf("%d",&salarioInicial);

    printf("Pontos percentuais do aumento: ");
    scanf("%d",&porcentagem);

    printf("Novo valor = %d \nAumento = %d", salarioInicial* porcentagem/100 + salarioInicial, salarioInicial * porcentagem/100); 



}