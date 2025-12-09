#include <stdio.h>

int main(){
    int i, n;
    scanf("%d", &n);
    //n = n-1;
    printf("%d\n", n);
    for ( i = n ; i >= 0 ; --i)
    {
        if (i%2==0)
        {
            printf("%d ", i);
        }
        
    }
    
    



    return 0;
}