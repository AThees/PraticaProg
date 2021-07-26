#include <stdio.h>
#include <math.h>


// Função que calcula o volume da caixa
float volume_da_caixa(float L, float H, float P){

    float volume;

    volume = L * H * P;

    return volume;

}


// Função que calcula a espessura das paredes da caixa
float espessura_minima(float vol){

    float esp;

    vol = ceil(vol);

    if (vol <= 1){

        return 0.8;

    }

    else{

        esp = 0.8 + (vol - 1) * 0.3;

        return esp;

    }

}

// Funcao que calcula uma o preço de uma face da caixa
float preco_partes(float c1, float c2, float esp){

    float preco;

    preco = c1 * c2 * esp * 45;

    return preco;

}


// Função que calcula o valot total da caixa
float preco_total(float larg, float prof, float alt){

    float esp, precoFace1, precoFace2, precoBase, volume, total;

    volume = volume_da_caixa(larg, alt, prof);

    esp = espessura_minima(volume);

    precoBase = preco_partes(larg, prof, esp);

    precoFace1 = 2 * preco_partes(larg, alt, esp);

    precoFace2 = 2 * preco_partes(prof, alt, esp);

    total = precoBase + precoFace1 + precoFace2;

    return total;
}


int main(void){

    float largura, altura, profundidade, precoTotal;

    printf("PRECO DA CAIXA D'AGUA\n");
    printf("Largura: ");
    scanf("%f", &largura);

    printf("Altura: ");
    scanf("%f", &altura);
    
    printf("Profundidade: ");
    scanf("%f", &profundidade);

    precoTotal = preco_total(largura, profundidade, altura);

    printf("Valor da caixa d'agua: R$ %.2f", precoTotal);
}
