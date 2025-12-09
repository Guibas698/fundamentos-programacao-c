#include <stdio.h>
int main(){
int n, n1=0, n2, n3, i=0;

scanf("%d", &n);
scanf("%d", &n1);
scanf("%d", &n2);
//scanf("%d", &n3);

 while (i<n1 || i<n2 || i<n3)
 {
    
    i++;
 }
  printf("%d ", i);

while (i>n1 || i>n2 || i>n3)
{
    i--;
}
    printf("%d", i);
}