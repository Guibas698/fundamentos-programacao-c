#include <stdio.h>
#include <string.h>
int main(){
    char frase[100];
    fgets(frase, sizeof(frase), stdin);
    printf("[");
    for (int i = 0; i < strlen(frase); i++)
    {
        printf("%c", frase[i]);
        if (i != strlen(frase))
        {
            printf("-");
        }
        
    }
    printf("]");






    return 0;
}