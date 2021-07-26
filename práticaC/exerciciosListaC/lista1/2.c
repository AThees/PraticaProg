// Crie uma função que calcule o aumento que será dado a um funcionário. Esta função receberá como
// parâmetro o salário atual do funcionário e a porcentagem de aumento. A função deverá, ao final, imprimir
// o novo valor do salário e o valor do aumento.
#include <stdio.h>


int main(void){
    
    float salarioInicial, porcentagem;

    scanf("%f",&salarioInicial);

    scanf("%f",&porcentagem);

    printf("Novo salario: %.2f \nAumento: %.2f", salarioInicial* porcentagem/100 + salarioInicial, salarioInicial * porcentagem/100); 

}