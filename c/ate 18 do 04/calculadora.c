#include <stdio.h>
int main(){


int n1, n2;
char o;


scanf("%d", &n1);
scanf("%d", &n2);
scanf(" %c", &o);

switch(o)
            {
                case '+':
                        printf("%d\n", n1 + n2);
                        break;

                case '-':
                        printf("%d\n", n1 - n2);
                        break;

                case '*':
                        printf("%d\n", n1 * n2);
                        break;

                case '/':
                        if(n2 != 0 && n1%n2 != 0){
                            printf("%.1f\n",(float) n1 / n2);
                        }else if (n2 != 0){
                            printf("%d", n1 / n2);
                        }
                        else if(n2 == 0){
                            printf("invalida");
                        }
                        break;



                default:
                       printf("invalida");
}

}