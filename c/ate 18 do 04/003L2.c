#include <stdio.h>
int main(){
float V, T, L, S, D;

scanf("%f", &V);
scanf("%f", &T);
scanf("%f", &L);

T = T / 60;
S = V * T;
D  =  S / L;

printf("%0.2f", D);



}
