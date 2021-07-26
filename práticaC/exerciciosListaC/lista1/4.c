// Calcule o salário líquido do funcionário sabendo que este é constituído pelo salário bruto mais o valor das
// horas extras subtraindo 8% de INSS do total. Serão lidos nesse problema o salário bruto, o valor das
// horas extras e o número de horas extras. Apresentar ao final o salário líquido.

#include <stdio.h>

int main(void){

    float salarioBruto, horasExtras, valorHoraExtra, salarioLiquido, salarioSemImposto;

    printf("Insira o salario bruto: ");
    scanf("%f", &salarioBruto);

    printf("Numero de horas extras: ");
    scanf("%f", &horasExtras);
    
    printf("Valor da hora extra: ");
    scanf("%f", &valorHoraExtra);

    salarioSemImposto = (salarioBruto + (valorHoraExtra*horasExtras));

    salarioLiquido = salarioSemImposto - salarioSemImposto * 0.08;

    printf("O salario liquido e de: %f", salarioLiquido);

}