#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, x;
    
    scanf("%d", &x);
    
    float v[x], soma, media;

    for(i = 0; i < x; i++){ 
        scanf("%f", &v[i]);
    }

    for(i = 0; i < x; i++){ 
        soma = soma + v[i];
    }


    /*printf("\n\n");
    for(i = 0; i < x; i++)
        printf("%f ", v[i]);
    printf("\n\n");
    printf("%f", soma);
    
    printf("\n\n");*/
    media = soma/x;
    printf("%0.1f", media);

    return 0;
}