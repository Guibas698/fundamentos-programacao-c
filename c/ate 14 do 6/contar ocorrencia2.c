#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char letra;
    int count = 0;

   // printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //printf("Digite uma letra: ");
    scanf(" %c", &letra);

    // Percorre a frase contando quantas vezes a letra aparece
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == 'letra' ) {
            count++;
        }
    }

    printf("A letra '%c' aparece %d vezes na frase.\n", letra, count);

    return 0;
}
