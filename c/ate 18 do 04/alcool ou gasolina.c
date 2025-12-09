#include <stdio.h>
int main(){

float g, e;

scanf("%f", &g);

scanf("%f", &e);

e = e*0.3+e;

if (g < e)
{
    printf("Gasolina");
}
else{
    printf("Alcool");
}




}