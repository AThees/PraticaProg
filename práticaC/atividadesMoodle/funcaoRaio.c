#include <stdio.h>

float calcular_diametro(float raio){

    float diam;

    diam = raio * 2;

    return diam;

}

float calcular_circunferencia(float r){

    float circ;

    circ = 2 * 3.141592 * r;

    return circ;

}



float calcular_area(float raio){

    float area;

    area = 3.141592 * raio * raio;

    return area;

}

void dados_totais(float raio){

    float diametro, circunferencia, area;

    diametro = calcular_diametro(raio);

    circunferencia = calcular_circunferencia(raio);

    area = calcular_area(raio);

    printf("Raio: %.2f\nDiâmetro: %.2f\nCircunferência: %.2f\nÁrea: %.2f\n\n", raio, diametro, circunferencia, area);

}



int main(void){

    float raioCirculo1, raioCirculo2;

    scanf("%f", &raioCirculo1);
    scanf("%f", &raioCirculo2);

    dados_totais(raioCirculo1);
    dados_totais(raioCirculo2);

    
}