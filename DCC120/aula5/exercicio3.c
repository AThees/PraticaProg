#include <stdio.h>

void imprimeN (int n)
{
    int i;
    
    i = 1;
    while (i <= n)
    {
        printf ("%d ", i);
        i++;
    }
    printf ("\n");
}

int main()
{
    int n;
    int i;
    printf ("Digite o valor de n: ");
    scanf ("%d", &n);
    
    i = 1;
    while (i <= n)
    {
        imprimeN (i);
        i++;
    }
    
    return 0;
}

