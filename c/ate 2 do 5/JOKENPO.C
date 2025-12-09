#include <stdio.h>
int main(){
char j1, j2;
scanf("%c", &j1);
int aux, n1, n2;



switch (j1)
{
   case 'R':
    n1=2;
   break;

   case 'P':
     n1=4;
   break;

    case 'S':
     n1=8;
   break;

   case 'L':
     n1=16;
   break;

 case 'K':
     n1=32;
   break;
}
scanf(" %c", &j2);
printf("%d\n", n1);


switch (j2)
{
   case 'R':
    n2=2;
   break;

   case 'P':
     n2=4;
   break;

    case 'S':
     n2=8;
   break;

   case 'L':
     n2=16;
   break;

 case 'K':
     n2=32;
   break;
}
printf("%d\n", n2);

aux = n2-n1;


switch (aux)
{
   case 4:
     printf("jog1");
   break;

   case -4:
     printf("jog2");
   break;
    
    case 2:
     printf("jog1");
   break;

   case -2:
     printf("jog2");
   break;

   case 14:
     printf("jog1");
   break;

   case -14:
     printf("jog2");
   break;

   case -16:
     printf("jog1");
   break;

   case 16:
     printf("jog2");
   break;

   case 24:
     printf("jog1");
   break;

   case -24:
     printf("jog2");
   break;

   case -8:
     printf("jog1");
   break;

   case 8:
     printf("jog2");
   break;

   case 12:
     printf("jog1");
   break;

   case -12:
     printf("jog2");
   break;

   case -28:
     printf("jog1");
   break;

   case 28:
     printf("jog2");
   break;

   case 30:
     printf("jog1");
   break;

   case -30:
     printf("jog2");
   break;

   case 6:
     printf("jog1");
   break;

   case -6:
     printf("jog2");
   break;

  
   



}
printf("\n%d", aux);
}