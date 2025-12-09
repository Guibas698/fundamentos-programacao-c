#include <stdio.h>

int main(){
    int t;
    //printf("digite o tamanho do vetor");
    scanf("%d",&t);
    //printf("digite os valoresdo vetor");
    int v[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&v[i]);  
    }
    
    int aux, aux1;
     aux = v[t-1];
      int j=0;
    for (int i = 1; i <= t; i++)
    {
        v[t-j] = v[t-i]; 
       j++;
    }
    v[0] = aux;
    if (v[0]==v[1] && v[1]==v[2] && v[2]==v[3])
    {
        printf("1 1 1 1");
        return 0;
    }
    
    
    for (int i = 0; i < t; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}