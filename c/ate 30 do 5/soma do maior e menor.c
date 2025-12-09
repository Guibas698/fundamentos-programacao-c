#include <stdio.h>

int main(){
    int v[5], maior=0, menor=0, soma=00;

    
    
    
    scanf("%d", v[1]);
    menor = v[1];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);

    if (maior<v[i])
    {
        maior = v[i];
    
    }
    
    if (menor>v[i])
    {
        menor = v[i];
    }
     
    
}
    printf("%d\n", menor);
    printf("%d\n", maior);
    soma = menor+maior;

    printf("%d", soma);
    return 0;
}
