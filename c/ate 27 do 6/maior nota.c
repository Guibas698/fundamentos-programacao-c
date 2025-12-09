#include "stdio.h"
#include "string.h"

struct REG_ALUNO {
     char nome[50];
     int matricula;
     char disciplina[50];
     float nota;
};
void registro_aluno(struct REG_ALUNO* aluno){
    scanf("%s", aluno->nome);
    scanf("%d", &(aluno->matricula));
    scanf("%s", aluno->disciplina);
    scanf("%f", &(aluno->nota));
}
void maior_nota(struct REG_ALUNO aluno1, struct REG_ALUNO aluno2){
    if (aluno1.nota>aluno2.nota)
    {
        printf("%s , %.1f", aluno1.nome, aluno1.nota);
    }
    else if (aluno1.nota<aluno2.nota)
    {
        printf("%s , %.1f", aluno2.nome, aluno2.nota);
    }
    else
    {
        printf("%s e %s , %.1f", aluno1.nome, aluno2.nome, aluno1.nota);
    }
    



}

int main(){
    struct REG_ALUNO aluno1, aluno2;
    registro_aluno(&aluno1);
    registro_aluno(&aluno2);

    maior_nota(aluno1, aluno2);


    return 0;
}