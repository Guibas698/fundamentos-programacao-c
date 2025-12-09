#include <stdio.h>
#include <string.h>

int main() {
    int x = 0, y = 0;
    printf("Digite o ano do aniversario: ");
    scanf("%d", &x);
    getchar(); // Consumir o caractere de nova linha

    char palavra[100];
    printf("Digite a força do sopro: ");
    fgets(palavra, sizeof(palavra), stdin);

    while (1) {
        if (strcmp(palavra, "fuuuuu\n") == 0) {
            printf("Bom sopro!\n");
            y++;
        } else if (strcmp(palavra, "fuuu\n") == 0) {
            printf("Precisa de um pouco mais de força no sopro!\n");
        } else {
            printf("Um pouco mais de força no sopro!\n");
        }

        if (y == x) {
            printf("parabens voce completou %d anos", x);
            break;
        }

        printf("Digite a força do sopro: ");
        fgets(palavra, sizeof(palavra), stdin);
    }
    
    return 0;
}
