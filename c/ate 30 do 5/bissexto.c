#include <stdio.h>

int main(){
    int ano;
    scanf("%d", &ano);

    if (ano%400==0){
        printf("sim");
    }
    else if (ano%4==0 && ano%100==0)
    {
        printf("nao");
    }
    else if (ano%4==0)
    {
        printf("sim");    
    }
    else
    {
        printf("nao");
    }
    
    





    return 0;
}