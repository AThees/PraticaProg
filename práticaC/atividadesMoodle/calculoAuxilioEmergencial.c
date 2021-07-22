#include <stdio.h>

void calculaAuxilio(int familias[], float rendas[], float pagamentos[], int numFamilias){

    int i, naoRecebe;

    naoRecebe = 0;

    for (i = 0; i < numFamilias; i++){

        if(rendas[i] >= 3135.00){

            naoRecebe++;
            continue;

        }

        else{

            pagamentos[i] = 2000 + (500 * familias[i]);

        }

    }

    printf("Número de famílias que não receberam o auxilio: %d\n", naoRecebe);

}

int main(void){

    int numFamilias;

    scanf("%d", &numFamilias);

    int familias[numFamilias], i;

    float rendas[numFamilias], pagamentos[numFamilias];

    for(i = 0; i < numFamilias; i++){

        scanf("%d", &familias[i]);

        scanf("%f", &rendas[i]);

    }

    calculaAuxilio(familias, rendas, pagamentos, numFamilias);

    for (i = 0; i < numFamilias; i++){

        printf("Pagamentos: %.2f\n", pagamentos[i]);

    }









    return 0;
}








