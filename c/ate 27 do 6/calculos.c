#include <stdio.h>

struct EXPRESSAO {
     int num1;
     int num2;
};
void resultado(struct EXPRESSAO *expressao){
    float divisao = (float) expressao->num1/expressao->num2;
    printf("%d ",expressao->num1+expressao->num2);
    printf("%d ",expressao->num1-expressao->num2);
    printf("%2f ", divisao);
    printf("%d",expressao->num1*expressao->num2);
}
int main(){
    struct EXPRESSAO expressao;
    scanf("%d",&(expressao.num1));
    scanf("%d",&(expressao.num2));
    
    resultado(&expressao);
   
    return 0;
}