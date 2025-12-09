#include <stdio.h>

int main(){
    int vet[2][3];
    int soma=0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &vet[i][j]);
            soma +=vet[i][j];
        }
        
    }

    printf("%d", soma);


    return 0;
}