#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void tabuada ()
{
    int resposta;
    int contador;
    int a, b;
    
    a = rand () % 10;
    b = rand () % 10;
    printf ("%d x %d = ", a, b);
    scanf ("%d", &resposta);
    contador = 1;
    while (resposta != a * b && contador < 5)
    {
        printf ("Ops, tente novamente! ");
        scanf ("%d", &resposta);
        contador++;
    }
    if (resposta == a * b)
        printf ("Parabens, voce acertou!\n");
    else
        printf ("Acabaram as tentativas. A resposta correta seria %d\n", a * b);
}

int main()
{
    int i;
    printf ("EXERCICIO DA TABUADA\n");
    
    // Inicializacao dos numeros aleatorios
    srand (time (NULL));

    i = 0;
    while (i < 15)
    {
        tabuada ();
        i++;
    }

    return 0;
}
