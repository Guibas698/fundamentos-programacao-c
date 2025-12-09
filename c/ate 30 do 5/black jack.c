#include <stdio.h>
int main(){
    int i, n, soma=0;

    scanf("%d", &n);

    int v[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    

    int n_a=0;

        for ( i = 0; i < n; i++){
            
            if (v[i] == 11 || v[i] == 12 || v[i] == 13)
            {
                soma = soma+10;
            }
            else if (v[i] == 1)
            {
                soma = soma + 11;
                n_a++;
            }
            else{
                soma = soma+v[i];
            }  
        }

        while (soma>21 && n_a > 0)
        {
            soma = soma-10;
            n_a--;
        }
        
    printf("%d\n", soma);

  
   
   
   
    return 0;


}





