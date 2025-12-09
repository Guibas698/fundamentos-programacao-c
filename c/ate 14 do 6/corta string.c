#include <stdio.h>
#include <string.h>

void erase(int begin, int cout, char frase[100]){
     int length = strlen(frase);
    //end = end - 1;
    for (int i = begin;i < length && i <begin+cout; i++)
    {
       printf("%c", frase[i]); 
    }
    
}

int main(){
    int begin, cout;
    char frase[100];
    fgets(frase, sizeof(frase), stdin);
    scanf("%d %d",&begin, &cout);
    
    
    
    
    erase(begin, cout, frase);
    printf("\n");
    return 0;
}