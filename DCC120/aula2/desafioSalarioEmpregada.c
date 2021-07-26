#include <stdio.h>

int main(void){

    int salario1, salario2, salario1arredondado, salario2arredondado, notas100_1, notas50_1, notas20_1, notas10_1, notas5_1;
    int notas100_2, notas50_2, notas20_2, notas10_2, notas5_2;
    int notas100total, notas50total, notas20total, notas10total, notas5total;

    // Define os dois salarios
    scanf("%d", &salario1);
    scanf("%d", &salario2);

    // Arredonda os valores para múltiplos de 5
    salario1arredondado = 5 * ((salario1 + 4) / 5);
    salario2arredondado = 5 * ((salario2 + 4) / 5);

    //Calcula o numero de notas de 100
    notas100_1 = salario1arredondado/100;

    //Se o resto das divisões forem >= valor das notas -> calcula o número de notas |salario 1
    //Se não -> Zera o número de notas |salario 1
    if (salario1arredondado % 100 >= 50){
        notas50_1 = (salario1arredondado % 100)/50;
    }
    else notas50_1 = 0;
        
    if (salario1arredondado % 100 >= 20){
        notas20_1 = ((salario1arredondado % 100)%50)/20;
    }
    else notas20_1 = 0;
    if (salario1arredondado % 100 >= 10){
        notas10_1 = (((salario1arredondado % 100)%50)%20)/10;
    }
    else notas10_1 = 0;
    
    notas5_1 = ((((salario1arredondado % 100)%50)%20)%10)/5;

    //Se o resto das divisões forem >= valor das notas -> calcula o número de notas |salario 2
    //Se não -> Zera o número de notas | salario2
    notas100_2 = salario2arredondado/100;

    if (salario2arredondado % 100 >= 50){
        notas50_2 = (salario2arredondado % 100)/50;
    }
    else notas50_2 = 0;
        
    if (salario2arredondado % 100 >= 20){
        notas20_2 = ((salario2arredondado % 100)%50)/20;
    }
    else notas20_2 = 0;
    if (salario2arredondado % 100 >= 10){
        notas10_2 = (((salario2arredondado % 100)%50)%20)/10;
    }
    else notas10_2 = 0;
    
    notas5_2 = ((((salario2arredondado % 100)%50)%20)%10)/5;

    //Calcula o total de notas de cada tipo
    notas100total = notas100_1 + notas100_2;
    notas50total = notas50_1 + notas50_2;
    notas20total = notas20_1 + notas20_2;
    notas10total = notas10_1 + notas10_2;
    notas5total = notas5_1 + notas5_2;

    //Printa a mensagem com a resposta
    printf("PAGAMENTO SEM TROCO\n1o valor: R$%d\n2o valor: R$%d\nNotas: %dxR$100;%dxR$50;%dxR$20;%dxR$10;%dxR$5.", salario1, salario2, notas100total, notas50total, notas20total, notas10total, notas5total);


}