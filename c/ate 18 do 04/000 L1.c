#include <stdio.h>
#include <stdlib.h>

int main(){
float  divisao;
int  A, B, soma, subtracao, multiplicacao, resto;

    
printf("Digite um numero:\n ");
    scanf("%d", &A);
printf("digite outro numero:\n");
    scanf("%d", &B);
soma = A + B;
subtracao = A - B;
multiplicacao = A * B;
printf("a soma dos numeros:%d\n", soma);
printf("a subtracao:%d\n", subtracao);
printf("a multiplicacao:%d\n", multiplicacao);

divisao = (float) A / B;

printf("a divisao:%.2f\n", divisao);
resto = A % B;
printf("o resto:%d", resto);
}
