#include <stdio.h>
#include <math.h>

int main()

{
      int A, B, C;
      printf("\n Defina o valor de A: ");
      scanf("%d", &A);

      printf("\n Defina o valor de B: ");
      scanf("%d", &B);

      printf("\n Defina o valor de C: ");
      scanf("%d", &C);

      int Delta;
      Delta = pow(B, 2) - 4 * C;

      if(Delta < 0){

            printf("\n Delta é menor que 0, portanto não possui raízes reais");
            return 0;
      }
      
      else{

            int x1, x2;

            x1 = ((-1) * B + sqrt(Delta)) / 2 * A;

            x2 = ((-1) * B - sqrt(Delta)) / 2 * A;

            printf("X' = %d \n x'' = %d", x1, x2);

      }
}
