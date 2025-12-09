#include <stdio.h>

int diagonal_principal(int vet[5][5]) {
    int somaPrincipal=0;
    for (int i = 0; i < 5; i++) {
        somaPrincipal += vet[i][i];
    }
    return somaPrincipal;
}

int diagonal_secundaria(int vet[5][5]) {
    int somaSecundaria=0;
    for (int i = 0; i < 5; i++) {
        somaSecundaria += vet[i][4 - i];
    }
    return somaSecundaria; 
}

int main() {
    int vet[5][5];
    int result = 0;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &vet[i][j]);
        }
    }

    result = diagonal_principal(vet) - diagonal_secundaria(vet);
    printf("%d\n", result);

    return 0;
}
