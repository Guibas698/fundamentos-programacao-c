#include <stdio.h>
#include <math.h>

int main(){

float x1, y1, x2, y2, R;

scanf("%f", &x1);
scanf("%f", &y1);
scanf("%f", &x2);
scanf("%f", &y2);

R = pow(x1 - x2, 2);
R += pow(y1 - y2, 2);
R = sqrt(R);


printf("%0.2f\n", R);

}