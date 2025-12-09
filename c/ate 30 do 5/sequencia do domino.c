#include <stdio.h>

int main(){

    int i, n;
    scanf("%d",&n);

    int v[n];
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    int ajuste = 0;
    for ( i = 0; i < n; i++)
    {
         if (v[i] > v[i+1])
        {
            ajuste = 1;
            break;
           
        }
           
    }
    
    if (ajuste)
    {
        printf("precisa de ajuste\n");

    }
    else
    {
        printf("ok\n");

    }
    




    return 0;
}