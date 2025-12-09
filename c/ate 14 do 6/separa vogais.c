#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char separas1[100];
    char separas2[100];
    int ci = 0, cp = 0;
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
            separas1[cp] = frase[i];
            cp++;
        }
        if (frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != ' ') {
            separas2[ci] = frase[i];
            ci++;
        }
    }

    for (int i = 0; i < cp; i++) {
        printf("%c", separas1[i]);
    }
    printf("\n");
    for (int i = 0; i < ci; i++) {
        printf("%c", separas2[i]);
    }
    
    return 0;
}
