#include <stdio.h>

int conversao_segundos(int seg){

    int horas, minutos, segundos;

    horas = seg / 3600;

    minutos = (seg % 3600) / 60;

    segundos = (seg % 3600) % 60;

    printf("Conversão: %d horas, %d minutos e %d segundos.", horas, minutos, segundos);

}

int main(void){

    int valorEmSegundos;

    scanf("%d", &valorEmSegundos);

    conversao_segundos(valorEmSegundos);

}