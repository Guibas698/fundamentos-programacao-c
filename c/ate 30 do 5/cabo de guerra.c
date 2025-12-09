#include  <stdio.h>
int main(){
    int i, t;
    scanf("%d",t);

    int v[t], aux=0;
    for (i=0; i<t; i++) {
        scanf("%d",v[i]);
    }
    int soma1;
    for ( i = 0; i < t/2; i++)
    {
        soma1 = soma1 + v[i];
    }
    int soma2;
    for ( i = t/2; i < t; i++)
    {
        soma2 = soma2 + v[i];
    }
    
    if (soma1<soma2)
    {
        printf("Sith");
    }
    else if (soma1>soma2){
        printf("Jedi");
    }
    else{
        printf("Empate");
    }

       
    




    return 0;
}