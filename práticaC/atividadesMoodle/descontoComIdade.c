#include <stdio.h>

void f_valorDesconto (float v_precoDaLente){

int v_idade;
float v_valorAPagar;

scanf("%d", &v_idade);

while (v_idade >= 0){

    v_valorAPagar = v_precoDaLente - (v_idade * 0.01 * v_precoDaLente);

if (v_precoDaLente - v_valorAPagar > 15){
    printf("%.2f ANEXAR COPIA DA RECEITA MEDICA\n", v_valorAPagar);
}
else{
    printf("%.2f\n", v_valorAPagar);
}

scanf("%d", &v_idade);

}
}
int main (){
    float v_precoLente;

scanf("%f", &v_precoLente);

f_valorDesconto (v_precoLente);

    return 0;
}