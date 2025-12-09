#include <stdio.h>

int main(){
    int i, x, n, soma=0;
    scanf("%d", &n);
    int v[n];
    int marcado[n];
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
        marcado[i] = 0;
    }

    for (i = 0; i < n; i++) {
        for (x = i+1; x < n; x++) {
            if (v[i]*-1 == v[x] && marcado[i] == 0 && marcado[x] == 0) {
                soma++;
                marcado[i] = 1;
                marcado[x] = 1;
                break;
            }
        }
    }

    printf("%d", soma);

    return 0;
}
