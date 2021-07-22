#include <stdio.h>

void f_calculaDesconto(float v_mensalidade){

    char v_curso;

    do{

        scanf("%c", &v_curso);

        switch(v_curso){

            case 'B':
                printf("Desconto R$%.2f\n", v_mensalidade * 0.05);
                printf("Nova Mensalidade R$%.2f\n\n", v_mensalidade - (v_mensalidade * 0.05));
                break;
            
            case 'H':
                printf("Desconto R$%.2f\n", v_mensalidade * 0.10);
                printf("Nova Mensalidade R$%.2f\n\n", v_mensalidade - (v_mensalidade * 0.10));
                break;

            
            case 'S':
                printf("Desconto R$%.2f\n", v_mensalidade * 0.20);
                printf("Nova Mensalidade R$%.2f\n\n", v_mensalidade - (v_mensalidade * 0.20));
                break;


            case 'E':
                printf("Desconto R$%.2f\n", v_mensalidade * 0.30);
                printf("Nova Mensalidade R$%.2f\n\n", v_mensalidade - (v_mensalidade * 0.30));
                break;


        }

    } while(v_curso != 'Q');





}


int main(void){

    float v_mensalidade;

    scanf("%f", &v_mensalidade);

    f_calculaDesconto(v_mensalidade);



    return 0;
}