#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> idades;
    int n=3;
    
    for (int i = 0; i < n; i++)
    {
        int c; cin >> c;
         idades.push_back(c);
    }
    
    idades.sort();
    idades.pop_front();
    cout<<*idades.begin()<<endl;
   









    return 0;
}