#include <stdio.h>
#include <string.h>

struct REG_ALUNO {
    char nome[100];
    float notas[3];
};

void leitura_aluno(struct REG_ALUNO *aluno) {
    scanf("%s", aluno->nome);

    for (int i = 0; i < 4; i++) {
        scanf("%f", &aluno->notas[i]);
    }
}
float media(float notas[], int tam) {
    float soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += notas[i];
    }
    return soma / tam;
}

int main(){
    struct REG_ALUNO aluno1, aluno2, aluno3;
    leitura_aluno(&aluno1);
    leitura_aluno(&aluno2);
    leitura_aluno(&aluno3);

     float media_aluno1 = media(aluno1.notas, 3);
     float media_aluno2 = media(aluno2.notas, 3);
     float media_aluno3 = media(aluno3.notas, 3);

    if (media_aluno1>6)
    {
        printf("%s ", aluno1.nome);
        printf("%0.2f\n", media_aluno1);
    }
    if (media_aluno2>6)
    {
        printf("%s ", aluno2.nome);
        printf("%0.2f\n", media_aluno2);
    }
    if (media_aluno3>6)
    {
        printf("%s ", aluno3.nome);
        printf("%0.2f", media_aluno3);
    }
    return 0;
}