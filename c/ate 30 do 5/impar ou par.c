#include <stdio.h>
int main(){
    int soma=0, toni, andrade;

    scanf("%d %d", &toni, &andrade);

    soma = toni+andrade;
    if (soma%2==0)
    {
        printf("toni\n");
    }
    else {
        printf("andrade\n");
    }



    return 0;
}