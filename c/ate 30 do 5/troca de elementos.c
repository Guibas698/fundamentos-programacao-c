#include <stdio.h>

int main(){
    int n, i, indice1, indice2;
    
    
    scanf("%d", &n);

    int v[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d", &indice1);
    scanf("%d", &indice2);

     int aux = v[indice1];
    v[indice1] = v[indice2];
    v[indice2] = aux;

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    
    return 0;
}