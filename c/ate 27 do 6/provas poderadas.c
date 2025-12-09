#include <stdio.h>

struct PROVA {
    float nota;
    int peso;
};

float media_ponderada(struct PROVA provas[], int quantidade) {
    float soma_notas = 0;
    int soma_pesos = 0;
    
    for (int i = 0; i < quantidade; i++) {
        soma_notas += provas[i].nota * provas[i].peso;
        soma_pesos += provas[i].peso;
    }
    
    return soma_notas / soma_pesos;
}

int main() {
    int quantidade;
    
    
    scanf("%d", &quantidade);
    
    struct PROVA provas[quantidade];
    
    
    for (int i = 0; i < quantidade; i++) {
        scanf("%f", &provas[i].nota);
    }
    
    
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &provas[i].peso);
    }
    
    float media = media_ponderada(provas, quantidade);
    printf("%.2f\n", media);
    
    return 0;
}
