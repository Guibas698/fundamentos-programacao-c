    #include <stdio.h>
    #include <string.h>

    int main(){
        char frase[100];
        int i, j=0;
        fgets(frase, sizeof(frase), stdin);

        for (int i = 0; i <= strlen(frase); i++)
        {
            printf("%c", frase[i]);
            if (frase[i] == ' ' || i == strlen(frase)-1)
            {
                for (j ; j <=i; j++)
                {
                    printf("%c", frase[j]);
                    //printf(" ");
                }
                j = i+1;
            }
            
        }

        








        return 0;
    }