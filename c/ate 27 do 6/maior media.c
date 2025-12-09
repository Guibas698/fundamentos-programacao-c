#include <stdio.h>
#include <string.h>

struct REG_ALUNO {
    char nome[100];
    float notas[3];
};

void leitura_aluno(struct REG_ALUNO *aluno) {
    scanf("%s", aluno->nome);

    for (int i = 0; i < 3; i++) {
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

int main() {
    struct REG_ALUNO aluno1, aluno2;

    leitura_aluno(&aluno1);
    leitura_aluno(&aluno2);

    float media_aluno1 = media(aluno1.notas, 3);
    float media_aluno2 = media(aluno2.notas, 3);

    float media_final = (media_aluno1 + media_aluno2) / 2;

    printf("%.2f\n", media_final);

    return 0;
}
