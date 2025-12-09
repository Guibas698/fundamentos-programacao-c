#include <stdio.h>
#include <stdbool.h>

bool verificaQuadradoMagico(int matriz[3][3]) {
    int soma = 0;
    // Calcula a soma da primeira linha
    for (int j = 0; j < 3; j++) {
        soma += matriz[0][j];
    }

    // Verifica se as somas das linhas, colunas e diagonais são iguais à soma da primeira linha
    for (int i = 1; i < 3; i++) {
        int somaLinha = 0;
        int somaColuna = 0;
        for (int j = 0; j < 3; j++) {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
        if (somaLinha != soma || somaColuna != soma) {
            return false;
        }
    }

    // Verifica a soma da diagonal principal
    int somaDiagonalPrincipal = matriz[0][0] + matriz[1][1] + matriz[2][2];
    if (somaDiagonalPrincipal != soma) {
        return false;
    }

    // Verifica a soma da diagonal secundária
    int somaDiagonalSecundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];
    if (somaDiagonalSecundaria != soma) {
        return false;
    }

    // Se todas as condições forem satisfeitas, é um quadrado mágico
    return true;
}

int main() {
    int matriz[3][3];

    // Ler a matriz
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificar se é um quadrado mágico
    bool ehQuadradoMagico = verificaQuadradoMagico(matriz);

    // Imprimir o resultado
    if (ehQuadradoMagico) {
        printf("sim");
    } else {
        printf("nao");
    }

    return 0;
}
