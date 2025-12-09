#include <stdio.h>
int main()
{
int f1, f2, f3;

scanf("%d", &f1);
scanf("%d", &f2);
scanf("%d", &f3);

if (f1>f2 && f1>f3)
{
    printf("G");
}
else if(f2>f1 && f3>f1)
{
    printf("P");
}
else
{
    printf("M"); 
}
if (f2>f1 && f2>f3)
{
    printf(" G");
}
else if (f3>f2 && f1>f2)
{
    ;printf(" P");
}
else
{
    printf(" M");
}
if (f3>f1 && f3>f2)
{
    printf(" G\n");
}
else if (f1>f3 && f2>f3)
{
     printf(" P\n");
}
else
{
 printf(" M\n");
}

return 0;
}