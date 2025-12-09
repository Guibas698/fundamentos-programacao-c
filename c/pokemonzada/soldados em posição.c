#include <stdio.h>
void contador(int vet[3][3]){
    int count=0;

    
    for (int j = 0; j < 3; j++) {
        for (int i = 1; i < 3; i++) {
            if (vet[i][j] < vet[i-1][j]) {
                count++;
            }
        }
    }
    printf("%d", count);
}
int main(){
    int v[3][3];

    for (int i = 2; i >= 0; i--) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &v[i][j]);
        }
    }
    contador(v);
    return 0;
}