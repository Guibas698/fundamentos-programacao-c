#include <stdio.h>
int main(){
int d=0, h=0, m=0;

scanf("%d", &d);
scanf("%d", &h);
//scanf("%d", &m);

if (d==1)
{
    printf("NAO\n");
}
else if (d!=7 && h>=8 && h<12)
{
    printf("SIM\n");
}
else if (d!=7 && h>=14 && h<18)
{
    printf("SIM\n");
}
else if (d==7 && h>=8 && h<12)
{
    printf("SIM\n");
}
else{
    printf("NAO\n");
}

}