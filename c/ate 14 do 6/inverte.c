#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char invertes;
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < strlen(frase) / 2; i++) {
        invertes = frase[i];
        frase[i] = frase[strlen(frase) - i - 1];
        frase[strlen(frase) - i - 1] = invertes;
    }

    for (int i = 0; i < strlen(frase); i++) {
        printf("%c", frase[i]);
    }

    return 0;
}
