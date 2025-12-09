#include <stdio.h>
int main(){
int A=0, B=0, C=0, D=0, S=0, R=0;

scanf("%d", &D);
scanf("%d", &C);
scanf("%d", &A);

A = A - 1900;
B = A / 4;
D = D - 1;
S = A + B + C + D;
R=S%7;
printf("%d\n", R);
 if (A%4 == 0 && A<=2000)
 {
   R=R-2;
    switch ( R )
  {
    
    case 0 :
    printf ("SEG\n");
    break;
    
    case 1 :
    printf ("TER\n");
    break;
    
    case 2 :
    printf ("QUA\n");
    break;
    
    case 3 :
    printf ("QUI\n");
    break;
    
    case 4 :
    printf ("SEX\n");
    break;
    
    case 5 :
    printf ("SAB\n");
    break;
    
    case 6 :
    printf ("DOM\n");
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
 }
 
 else if (A%4 == 0 && A>=2000)
 {
    R=R+2;
    switch ( R )
  {
    
    case 0 :
    printf ("SEG\n");
    break;
    
    case 1 :
    printf ("TER\n");
    break;
    
    case 2 :
    printf ("QUA\n");
    break;
    
    case 3 :
    printf ("QUI\n");
    break;
    
    case 4 :
    printf ("SEX\n");
    break;
    
    case 5 :
    printf ("SAB\n");
    break;
    
    case 6 :
    printf ("DOM\n");
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
 }
 
 else if ( A=1986)
 {
    R=R-1;
    switch ( R )
  {
    
    case 0 :
    printf ("SEG\n");
    break;
    
    case 1 :
    printf ("TER\n");
    break;
    
    case 2 :
    printf ("QUA\n");
    break;
    
    case 3 :
    printf ("QUI\n");
    break;
    
    case 4 :
    printf ("SEX\n");
    break;
    
    case 5 :
    printf ("SAB\n");
    break;
    
    case 6 :
    printf ("DOM\n");
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
 }
 
 else if ( A=1986)
 {
    R=R-1;
    switch ( R )
  {
    
    case 0 :
    printf ("SEG\n");
    break;
    
    case 1 :
    printf ("TER\n");
    break;
    
    case 2 :
    printf ("QUA\n");
    break;
    
    case 3 :
    printf ("QUI\n");
    break;
    
    case 4 :
    printf ("SEX\n");
    break;
    
    case 5 :
    printf ("SAB\n");
    break;
    
    case 6 :
    printf ("DOM\n");
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
 }

 else
 {
    R=R-3;
    switch ( R )
  {
    
    case 0 :
    printf ("SEG\n");
    break;
    
    case 1 :
    printf ("TER\n");
    break;
    
    case 2 :
    printf ("QUA\n");
    break;
    
    case 3 :
    printf ("QUI\n");
    break;
    
    case 4 :
    printf ("SEX\n");
    break;
    
    case 5 :
    printf ("SAB\n");
    break;
    
    case 6 :
    printf ("DOM\n");
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
 }
 

    return 0;
}