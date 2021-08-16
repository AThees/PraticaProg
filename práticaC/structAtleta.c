#include <stdio.h>

typedef struct {
    float peso;
    float altura;
} Medidas;

typedef struct {
    int idade;
    char nome[200];
    char esporte[100];
    Medidas meds;
} Atleta;

int main() {
    Atleta a1;
    
    fgets(a1.nome, 200, stdin);
    scanf("%f", &a1.meds.peso);
    getchar();
    scanf("%f", &a1.meds.altura);
    getchar();
    fgets(a1.esporte, 100, stdin);
    scanf("%d", &a1.idade);
    
    printf("Nome: %s", a1.nome);
    printf("Peso: %.1f kg\n", a1.meds.peso);
    printf("Altura: %.2f m\n", a1.meds.altura);
    printf("Esporte: %s", a1.esporte);
    printf("Idade: %d anos", a1.idade);

    return 0;
    
}