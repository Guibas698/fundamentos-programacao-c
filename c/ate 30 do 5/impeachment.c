#include <stdio.h>
int main(){
    int i=0, n=0;
    char v;
    scanf("%d", &n);
    int soma=0;
    for(i=0; i<n*2; i++){
            scanf("%c", &v); 
            if (v == 'S' )
            {
                soma++;
            }
            
        }
   printf("soma = %d\n", soma);
   
   if (soma > (n*2)/3)
    {
        printf("aberto\n");
    }
    else
    {
        printf("fechado\n");
    }
    
    





    return 0;
}