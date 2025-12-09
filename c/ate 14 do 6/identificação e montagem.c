#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < strlen(frase)-1; i++)
    {
        if (frase[i] == ' ')
        {
            printf(" ");
        }
        else if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
        {
            printf("v");
        }
        else
        {
            printf("c");
        }
        
    }
    
    return 0;
}