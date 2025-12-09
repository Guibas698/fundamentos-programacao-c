#include <stdio.h>

int main(){
    int t=0, cout=0;
    scanf("%d",&t);
    int v1[t], v2[t];

    for (int i = t; i >0; i--)
    {
        scanf("%d",&v1[i]);  
    }

    for (int i = t; i >0; i--)
    {
        scanf("%d",&v2[i]);  
    }
    int v3[t];  
    for (int i = t; i > 0; i--)
    {
        v3[i] = v1[i]+v2[i];
        
         if (v3[i] > 9)
        {
            v3[i] = v3[i]-10;
            v1[i-1] = v1[i-1]+1;
        }
        if (v3[0]>9)
        {
            t++;
            v3[0] = v3[0]-10;

            for (int x = t; x > 0; x--)
            {
                v3[x] = v3[x-1]
            }
            

        }
        
        
    }
    for (int i = t; i >0; i--)
    {
        printf("%d ", v3[i]);    
    }
    

    return 0;
}