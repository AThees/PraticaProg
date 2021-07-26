#include <stdio.h>

void f_aprovar(int v_notaFinal, int v_numeroFaltas, int v_tarefasRealizadas){

int v_frequencia;

v_frequencia = 60 - v_numeroFaltas;

// Aprovado
if (v_notaFinal >= 60 && v_frequencia >= 45 && v_tarefasRealizadas >= 30){

    printf("Aprovado\n");

}

// Prova substitutiva
if (v_notaFinal < 60 && v_frequencia >= 45 && v_tarefasRealizadas >=30){

    printf("O aluno tem direito de fazer a prova substitutiva\n");

}
// Reprovado

if (v_frequencia < 45 || v_tarefasRealizadas < 30){

    printf("Reprovado\n");

}

}




int main(void){

    int v_numeroAlunos, v_nota, v_faltas, v_tarefas, contador;

    contador = 0;

    scanf("%d", &v_numeroAlunos);


    while(contador < v_numeroAlunos){

        scanf("%d", &v_nota);
        scanf("%d", &v_faltas);
        scanf("%d", &v_tarefas);

        f_aprovar(v_nota, v_faltas, v_tarefas);

        contador++;
    }



}