int main(void){

    int i, j, aux, vetor[10];

    for(i = 0; i <= (tam - 2); i++){

        for(j = tam - 1; j > i; j--){

            if ( vetor [j] < vetor [j - 1]){

                aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
            }

        }

    }




}