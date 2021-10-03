#include <stdio.h>
#include <float.h>
#define TAM 11


typedef struct{
    int cod_municipio;
    char especie[51];
    float altura[TAM];
}Est_Eucalipto;

int CrescimentoEucalipto (Est_Eucalipto nome){
  int indice;
  float vet[TAM-1];
  float menor = FLT_MAX;
  for(int i = 0; i < TAM-1; i++){
    vet[i] = nome.altura[i+1] - nome.altura[i];
  }

  for(int i = 0; i < TAM-1; i++){
    if(vet[i] < menor){
      menor = vet[i];
      indice = i;
    }
  }

  return indice;
}
int main(void) {
  Est_Eucalipto nome;
  int indice = 0;

  scanf("%*c%d",&nome.cod_municipio);
  getchar();
  fgets(nome.especie,51,stdin);
 
  
    for(int i = 0; i < TAM; i++){
      scanf("%f",&nome.altura[i]);
     }

     indice = CrescimentoEucalipto (nome);

     printf("O indice do ano que houve o menor crescimento foi %d",indice);

  return 0;
}