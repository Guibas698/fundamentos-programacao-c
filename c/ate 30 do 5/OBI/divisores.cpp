#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numero, p=2; cin>> numero;
    //vector<int>primo;
    int quant_div = 1;
    int aux;
    while (numero<1)
    {
        aux=0;
        while (numero%p==0)
        {
            numero =/ p;
            aux++;
        }
        if (aux>0)
        {
            quant_div *= (aux+1);
            p++;
        }
        cout<<quant_div<<endl;
    }
    
    
    return 0;
}