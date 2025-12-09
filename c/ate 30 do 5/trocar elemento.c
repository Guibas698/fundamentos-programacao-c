#include <stdio.h>
int main(){
    int n, i, p1, p2;
    
    
    scanf("%d", &n);

    int v[n];
    
     printf("digite os valores do vetor");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
      
    printf("Digite a prmieira posicao: ");
        scanf("%d", &p1);
    printf("Digite a segunda posicao: ");
        scanf("%d", &p2);
    
    
    
    
    
    int aux = v[p1];
    v[p1] = v[p2];
    v[p2] = aux;

    printf("Vetor modificado:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }



    return 0;
}