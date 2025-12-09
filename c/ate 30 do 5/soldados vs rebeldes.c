#include <stdio.h>
int main(){
    int i, n;
    //printf("digite o tamanho do vetor");
    scanf("%d", &n);
    //printf("digite os valores");
    int v[n];
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
        //printf("%d ", v[i]);
    }

    int soldados=0, rebeldes=0;

    for (i = 0; i < n; i++){
        if (v[i]%2==0)
        {
           rebeldes =  rebeldes + v[i];
        }
        else{
            soldados = soldados + v[i];
        }


    

    }
    

    if (rebeldes == soldados)
    {
        printf("empate");
    }
    else if (rebeldes > soldados)
    {
        printf("rebeldes");
    }
    else
    {
        printf("soldados");
    }
    





    return 0;
}