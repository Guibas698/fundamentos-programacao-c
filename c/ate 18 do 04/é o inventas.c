#include <stdio.h>
int main(){

int n1, n2, n3, n4, n5;

scanf("%d", &n1);
scanf("%d", &n2);
scanf("%d", &n3);
scanf("%d", &n4);
scanf("%d", &n5);
if (n1 < n2)
{
    printf("%d", n1);
}
 else if (n2 < n3)
{
        printf("%d", n2);
    }
    else if (n3<n4)
    {
            printf("%d", n3);
        }
        else if (n4<n5)
        {
            printf("%d", n4);
        }
        else 
        {
            printf("%d", n5);
        }
    
    }














