#include <iostream>
#include <math.h>
using namespace std;

int buscabinaria(int v[], int tamanho, int valor) {
    int x = 0, y=tamanho-1; 
    while (x<=y)
    {
       int aux = x + ((x-y)/2);

       if (aux == valor)
       {
        return aux;
       }
       else if (v[aux]<valor)
       {
        x = aux + (tamanho/2);
       }
       else if (v[aux]>valor)
       {
        y = aux - (tamanho/2);
       }
       
       tamanho = tamanho/2;
       
    }

    return -1;

}
int main(){
    int n, m, i, posicao, momento=0;

    cin>>n>>m;

    int casas[n], cartas[m];
    for ( i = 0; i < n; i++)
    {
        cin>>casas[i];
    }
    
   
    for (i = 0; i < n; i++) {
    if (cartas[i] != casas[i]) {
        posicao = buscabinaria(casas, n, cartas[i]);
        if (posicao != -1) {
            momento += abs(posicao - i);  
        }
    }
}
        
             
            
    
    

    return 0;
}