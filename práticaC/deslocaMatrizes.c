#include <stdio.h>

void copia (int A[100][100], int B[100][100], int tam, int n){
    
    int i, j;
    
    for(i = 0; i < tam; i++){

        for(j = 0; j < tam; j++){

            if(n > 0){

                B[i][j] = A[i][(j + n) % tam];

            }

            else if(n < 0){

                if((j - n) < tam){

                    B[i][(j - n)] = A[i][j];

                }
                
                else{

                    B[i][(j - n) - tam] = A[i][j];

                }
            }
            
        }
    }
    for(i = 0; i < tam; i++){

        for(j = 0; j < tam; j++){

            printf("%d ", B[i][j]);

        }

        printf("\n");
    }

}

int main() {
    
    int A[100][100], B[100][100], tam, n, i, j;

    scanf("%d", &tam);
    
    for (i = 0; i < tam; i++){

        for(j = 0; j < tam; j++){

            scanf("%d", &A[i][j]);

        }

    }
    
    scanf("%d", &n);

    copia(A, B, tam, n);    

    return 0;
}