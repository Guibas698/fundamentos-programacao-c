#include <stdio.h>
 int main(){
    int i, n, j;
    scanf("%d", &n);
    int v[n], aux=0;
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    
    for (i = 0; i < n; i++) {
        for (j = 1; j < n-i; j++) {
            if (v[j-1] > v[j]) {
                aux = v[j-1];
                v[j-1] = v[j];
                v[j] = aux;
            }
        }
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d\n", v[i]);
    }
    

    return 0;
 }