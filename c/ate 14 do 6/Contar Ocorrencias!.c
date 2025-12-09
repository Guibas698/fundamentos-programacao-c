#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char letra;
    int count = 0;

    fgets(frase, sizeof(frase), stdin);
    scanf(" %c", &letra);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == letra || frase[i] == letra - 'A' + 'a' || frase[i] == letra - 'a' + 'A') {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
