#include <stdio.h>

int main() {
    float a, b;
    char operacao;

    scanf("%f %f", &a, &b);

    scanf("%*c %c", &operacao);

    switch (operacao){

        case '+':   printf("%.1f + %.1f = %.1f", a, b, a + b);
                    break;

        case '-':   printf("%.1f - %.1f = %.1f", a, b, a - b);
                    break;

        case '*': printf("%.1f * %.1f = %.1f", a, b, a * b) ;

        case '/': printf("%.1f / %.1f = %.1f", a, b, a / b);

    }

    return 0;
}