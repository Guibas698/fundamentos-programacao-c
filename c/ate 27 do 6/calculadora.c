#include <stdio.h>

struct EXPRESSAO {
     int num1;
     int num2;
     char operador;
};
int calcular(struct EXPRESSAO *expressao){
    int resultado=0;
    switch (expressao->operador)
    {
    case '+':
        resultado = expressao->num1 + expressao->num2;
        break;
    case '-':
        resultado = expressao->num1 - expressao->num2;
        break;
    case '/':
        resultado = expressao->num1 / expressao->num2;
        break;
    case '*':
        resultado = expressao->num1 * expressao->num2;
    default:
        break;
    }

    return resultado;

}
int main(){
    struct EXPRESSAO expressao;
    scanf("%d",&(expressao.num1));
    scanf("%d",&(expressao.num2));
    scanf(" %c",&(expressao.operador));

    int resposta = calcular(&expressao); 

    printf("%d", resposta);
    return 0;
}