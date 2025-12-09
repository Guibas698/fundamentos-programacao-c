#include <stdio.h>
int main(){

float p, h, imc;
scanf("%f", &p);
scanf("%f", &h);
imc = p/(h*h);

if (imc<17)
{
    printf("muito abaixo do peso");
}
else if (imc < 18.5)
{
   printf("abaixo do peso");

}
else if (imc<25)
{
   printf("peso normal");
}
else if (imc<30)
{
   printf("acima do peso");
}
else if (imc<35)
{
    printf("obesidade");
}
else if (imc<40)
{
    printf("obesidade severa");
}
else if (imc>40)
{
   printf("obesidade morbida");
}



}