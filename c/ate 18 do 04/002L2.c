#include <stdio.h>
#include <math.h>
int main(){

float l1, l2, l3, p, A, SA;

scanf("%f", &l1);
scanf("%f", &l2);
scanf("%f", &l3);

p = (l1 + l2 + l3) / 2;

SA = p * (p - l1) * (p - l2) * (p - l3);
A = sqrt(SA);

printf("%0.2f", A);

}