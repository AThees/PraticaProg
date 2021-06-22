#include <stdio.h>

int main() {
    float a, b;
    char operacao;

    scanf("%f%f", &a, &b);

    scanf("%*c %c", &operacao);

    switch (operacao){

        case '+':   printf("%f + %f = %.1f", a, b, a + b);
                    break;

        case '-':   printf("%f - %f = %.1f", a, b, a - b);
                    break;

        case '*': printf("%f * %f = %.1f", a, b, a * b) ;

        case '/': printf("%f / %f = %.1f", a, b, a / b);

    }

    return 0;
}