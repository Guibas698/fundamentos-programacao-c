#include <stdio.h>
int main(){

int l, c, x, aux;

scanf("%d", &l);
scanf("%d", &c);

x = l % 2;
aux = c % 2;

if ( aux != x )
{
    printf("0\n");
}
else 
{
    printf("1\n");
 }
}





