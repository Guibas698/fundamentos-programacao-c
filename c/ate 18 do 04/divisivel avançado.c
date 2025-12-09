#include <stdio.h>
int main(){

int n, i;

scanf("%d", &n);



if (n%7==0)
{
    printf("nao");
}
else if(n%3==0 && n%5==0){
    printf("sim");
}
else{
    printf("nao");
}

}