#include <stdio.h>

void printaTriangulo (int numero)
{
    int i;
    
    i = 1;
    while (i <= numero){

        printf ("%d ", i);
        i++;

    }

    printf ("\n");
}

int main()
{
    int num;
    int i;

    scanf ("%d", &num);
    
    i = 1;
    while (i <= num){

        printaTriangulo (i);
        i++;
        
    }
    
    return 0;
}

