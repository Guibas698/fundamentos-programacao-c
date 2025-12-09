#include <stdio.h>
int main(){
int n1, n2;

scanf("%d", &n1);
scanf("%d", &n2);    
    
if((n1%3==0 && n2%3==0) || (n1%5==0 && n2%5==0) )
{
    printf("sim");
}
else{
    printf("nao");
}    
    
}