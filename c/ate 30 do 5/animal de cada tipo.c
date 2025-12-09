#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);

    int v[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // ordenar vetor de entrada
    for (i = 0; i < n - 1; i++) {
        int min = i;
        for (j = i + 1; j < n; j++) {
            if (v[j] < v[min]) {
                min = j;
            }
        }
        int temp = v[i];
        v[i] = v[min];
        v[min] = temp;
    }

    // remover duplicatas
    int vn = 1;
    for (i = 1; i < n; i++) {
        if (v[i] != v[vn - 1]) {
            v[vn] = v[i];
            vn++;
        }
    }

    // ordenar vetor sem duplicatas
    for (i = 0; i < vn - 1; i++) {
        int min = i;
        for (j = i + 1; j < vn; j++) {
            if (v[j] < v[min]) {
                min = j;
            }
        }
        int temp = v[i];
        v[i] = v[min];
        v[min] = temp;
    }

    // imprimir vetor final
    for (i = 0; i < vn; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
