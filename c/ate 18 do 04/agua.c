#include <stdio.h>
#include <math.h>

int main() {
    int c;
    scanf("%d", &c);
    c = ceil(c);
    if (c <= 10) {
        printf("R$ 7\n");
    } else if (c <= 30) {
        printf("R$ %d\n", c = (c - 10) * 1 + 7);
    } else if (c <= 100) {
        printf("R$ %d\n", c = ((c - 30) * 2) + (7 + 20));
    } else if (c >= 101) {
        printf("R$ %d\n", c = ((c - 100) * 5) + (7 + 140 + 20));
    }
}