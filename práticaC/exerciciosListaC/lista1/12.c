// Faça uma função que receba o ano atual e o ano de nascimento de uma pessoa e imprima sua idade. A
// seguir, imprima se a pessoa é bebê (0 a 3 anos), criança (4 a 10 anos), adolescente (11 a 18 anos),
// adulta (19 a 50 anos) ou idosa (51 anos em diante).
#include <stdio.h>

int main(void){

    int anoAtual, anoNascimento, idade;
    char niver;

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    printf("Ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    printf("Já fez aniversario?(s/n)");
    scanf("%s", niver);

    if(niver == 's'){
        idade = idade + 1;
    }

    if (idade >= 0 <= 3){
    printf("%d anos - bebe", idade);
    }

    if (idade >=4 <= 10){
    printf("%d anos - crianca", idade);
    }

    // if (idade )

}
