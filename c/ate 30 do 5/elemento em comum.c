#include <stdio.h>

int main() {
    int i, n1, n2;

    scanf("%d", &n1);
    int v1[n1];
    for (i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }

    scanf("%d", &n2);
    int v2[n2];
    for (i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }

    int aux = 0;
    if (n1 > n2) {
        aux = n1;
    } else {
        aux = n2;
    }

    int x, soma = 0;
    for (i = 0; i < aux; i++) {
        for (x = 0; x < aux; x++) {
            if (i < n1 && x < n2 && v1[i] == v2[x]) {
                soma++;
            }
        }
    }

    if (soma >= 1) {
        printf("Existe");
    } else {
        printf("Nao existe");
    }

    return 0;
}
