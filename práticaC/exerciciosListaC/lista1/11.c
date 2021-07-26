// Faça a leitura do salário atual e do tempo de serviço de um funcionário. A seguir, em uma função, calcule
// o seu salário reajustado. Funcionários com até 1 ano de empresa, receberão aumento de 10%.
// Funcionários com mais de um ano de tempo de serviço, receberão aumento de 20%. A função deverá
// retornar o salário reajustado.
#include <stdio.h>

int main(void){

    int salarioAtual, salarioReajustado;

    float tempoServico;

    printf("Insira o salario atual: ");
    scanf("%d", &salarioAtual);

    printf("Insira o tempo de servico em meses: ");
    scanf("%f", &tempoServico);

    if (tempoServico < 12){

        salarioReajustado = salarioAtual + salarioAtual * .1;

        printf("Salario reajustado = %d", salarioReajustado);
    }
    if (tempoServico >= 12){

        salarioReajustado = salarioAtual + salarioAtual * .2;

        printf("Salario reajustado = %d", salarioReajustado);

    }


}