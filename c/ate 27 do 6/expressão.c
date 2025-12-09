#include <stdio.h>

struct EXPRESSAO {
     float num1;
     float num2;
     char operador;
};
void operacoa(struct EXPRESSAO expressao){
    float resultado=0;
    switch (expressao.operador)
    {
    case '+': 
        resultado=expressao.num1+expressao.num2;
        break;
    case '-': 
        resultado=expressao.num1-expressao.num2;
        break;
    case '/': 
        resultado=expressao.num1/expressao.num2;
        break;
    case '*': 
        resultado=expressao.num1*expressao.num2;
        break;
    default:
        break;
    }
    
    printf("2.%f", resultado);

}
int main(){
    struct EXPRESSAO expressao;
    scanf("%f", &expressao.num1);
    scanf("%f", &expressao.num2);
    scanf(" %c", &expressao.operador);

    operacoa(expressao);
    return  0;
}