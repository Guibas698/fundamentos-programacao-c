#include <stdio.h>

int main(){

    int i, n;
    scanf("%d", &n);
    
    int v[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    int soma = 0;
    for (i = 0; i < n - 2; i++) {
        if (v[i] == 1 && v[i+1] == 0 && v[i+2] == 0) {
            soma++;
        }
    }

    printf("%d\n", soma);

    return 0;
}
