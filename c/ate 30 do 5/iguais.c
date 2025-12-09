#include <stdio.h>

int main() {
    int n1, n2; 
    int i;

   
    scanf("%d", &n1);

    int v1[n1];

    for(i=0; i<n1; i++) {
        scanf("%d", &v1[i]);
    }


    scanf("%d", &n2);

    int v2[n2];
   
    for(i=0; i<n2; i++) {
        scanf("%d", &v2[i]);
    }

   
    if(n1 != n2) {
        printf("Diferentes\n");
            return 0;
    }

    for(i=0; i<n1; i++) {
        if(v1[i] != v2[i]) {
            printf("Diferentes\n");
            return 0;
        }
    }

    printf("Iguais\n");

    return 0;
}
