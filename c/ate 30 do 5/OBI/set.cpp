#include <iostream>
#include <set>
using namespace std;

int main(){
    int n; cin>>n;
    int v[n];
    for(int i=0; i<n ; i++)cin>> v[i];
    set<int>vetor(v, v+n);
    set<int>::iterator ordenacao = vetor.begin();
    while(ordenacao != vetor.end()){
        cout<<*ordenacao<< " ";
        ordenacao++;
    }
    cout << endl<< endl;
    
    
    
   
    return 0;
}