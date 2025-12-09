#include <stdio.h>
int main(){

int n1, n2, n3;

scanf("%d", &n1);
scanf("%d", &n2);
scanf("%d", &n3);

if (n1 == n2 && n1 == n3)
{
    printf("3\n");
}
else if (n1 == n3)
{
    printf("2\n");
}
else if (n2 == n3)
{
    printf("2\n");
}
else{
    printf("1\n");
}



}