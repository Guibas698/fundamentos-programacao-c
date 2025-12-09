#include <stdio.h>

int main() {
    int i=0, x=0;
    

    scanf("%d", &x);

    double h[x];
    double soma=0;
    for ( i = 0; i < x; i++)
    {
        scanf("%lf", &h[i]);
        soma = soma+h[i];
    }
    
    double media;
    media = soma/x;
    printf("%.2lf\n", media);
    for ( i = 0; i < x; i++)
    {
        if ( x == 1 && h[i] < media)
        {
            printf("P");
            break;
        }
        else if ( x ==1 && h[i] == media){
            printf("M");
            break;
        }
        else if ( x == 1 && h[i]> media){
            printf("G");
            break;
        }

        if (h[i] < media){
            printf("P");
        }   
        else if (h[i] == media){
            printf("M");
        }
        else if (h[i] > media){
            printf("G");
        }
         if (i != x-1) {
        printf(" ");
    }


    }
    










}