#include <stdio.h>
void verifica_simetria(int vet[3][3]){
    int cout = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (vet[i][j] == vet[j][i])
            {
                cout++;
            }
            
        }
        
    }
    if (cout == 3)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }
    
}
int main(){
    int vet[3][3];
    int soma=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &vet[i][j]);

        }
        
    }
    verifica_simetria(vet);


    return 0;
}