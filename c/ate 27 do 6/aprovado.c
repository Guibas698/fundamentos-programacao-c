#include <stdio.h>
#include <string.h>

struct registro_aluno
{
    char nome[50];
    int matricula;
    char disciplina[50];
    float nota;
};
void registrar_aluno(struct registro_aluno* aluno){
    scanf("%s", &(aluno->nome));
    scanf("%d", &(aluno->matricula));
    scanf("%s", &(aluno->disciplina));
    scanf("%f", &(aluno->nota));


}
void print_aluno(struct registro_aluno *aluno){
    printf("%s ", aluno->nome);
    if (aluno->nota>6)
    {
        printf("aprovado(a) em ");
    }
    else
    {
        printf("reprovado(a) em ");
    }
    printf("%s", aluno->disciplina);




}

int main(){
    struct registro_aluno aluno;
    registrar_aluno(&aluno);




    return 0;
}