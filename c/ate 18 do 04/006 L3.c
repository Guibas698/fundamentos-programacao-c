#include <stdio.h>
int main(){

int n1, n2, n3, n4, soma=0, i;

scanf("%d", &n1);
scanf("%d", &n2);
scanf("%d", &n3);
scanf("%d", &n4);



soma = n1+n2+n3+n4;

    if (soma == 0)
    {
      printf("nenhum\n");
    }
    else if (soma%4==0) 
    {
        printf("jog4\n"); 
    }
    else if (soma%3==0)
    {
        printf("jog3\n");
    }
    else if (soma%2==0)
    {
        printf("jog2\n");
    }
    else 
    {
        printf("jog1");
    }
    



}