#include <stdio.h>

int main() {
    int vet[4][4];
    int numeros[6];
    int count = 0;

    for (int x = 0; x < 6; x++) {
        scanf("%d", &numeros[x]);
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &vet[i][j]);
            for (int x = 0; x < 6; x++) {
                if (numeros[x] == vet[i][j]) {
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
