#include <stdio.h>

int main() {
    int n, i, x = 0;
    scanf("%d", &n);
    int v[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n; i++) {
        if (v[i] == 0 &&
            (i == 0 || v[i-1] == 0) &&
            (i == n-1 || v[i+1] == 0)) {
            x++;
        }
    }
    printf("%d\n", x);
    return 0;
}
