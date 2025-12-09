#include <stdio.h>

int main() {
    int n, i, j;
    float aux, mediana;
    
   
    scanf("%d", &n);
    
    
    float v[n];
    for (i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }
    
    
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    
    
     mediana = (n % 2 == 0) ? (v[n/2-1] + v[n/2]) / 2 : v[(n/2)];
    
    
    printf("%.2f", mediana);
    
    return 0;
}
