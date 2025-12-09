#include <stdio.h>
int main(){
int n, i=0, soma=0, numero=1;

scanf("%d", &n);

while (n>i)
{
    if (numero%3==0 && numero%7!=0)
    {
        soma += numero;
        i++;
    }
    
    numero++;
}
printf("%d", soma);


}