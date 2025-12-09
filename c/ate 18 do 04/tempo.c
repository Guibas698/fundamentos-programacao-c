#include <stdio.h>

int main(){
int hora, min, seg;

scanf("%d", &seg);

min = seg / 60;
hora = min / 60;
seg = seg % 60;
min = min % 60;

printf("%d:%d:%d", hora, min, seg);


}