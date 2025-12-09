#include <stdio.h>
#include <stdlib.h>
 int main(){

int c, g, b, m, p=0, t, aux;

scanf("%d", &c);
scanf("%d", &g);
scanf("%d", &b);
scanf("%d", &m);

aux = (b+g+m);
p = aux/c;
t = p + 1;

if ( aux%c != 0 ){
    printf("%d\n", t);
}
 else{
    printf("%d\n", p);
 }
 }