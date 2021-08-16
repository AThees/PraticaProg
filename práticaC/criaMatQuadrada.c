#include <stdio.h>

int main(void){

    int mat[3][3] = {{1,0,0},
                     {0,1,0},
                     {0,0,1}};

    int i, j, k;

    i = 0;
    j = 0;
    k = 0;

        printf("%d %d %d\n", mat[0][i], mat[0][i+1], mat[0][i+2]);

        printf("%d %d %d\n", mat[1][j], mat[1][j+1], mat[1][j+2]);

        printf("%d %d %d\n", mat[2][k], mat[2][k+1], mat[2][k+2]);

    return 0;
}