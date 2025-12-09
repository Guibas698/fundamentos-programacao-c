#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int>pilha1,pilha2;

    pilha1.push(10);
    pilha1.push(20);
    pilha1.push(30);
    pilha1.push(40);
    pilha1.push(50);

    cout<<"numero de elementos da pialha:"<<pilha1.size()<<endl;

    while (!pilha1.empty())
    {
        cout<<pilha1.top()<<endl;
        pilha1.pop();
    }
    if (pilha1.empty())
    {
        cout<<"nao contem elementos na pilha"<<endl;
    }
    else
    {
        cout<<"contem elementos na pilha"<<endl;
    }
    
    int n; cin>>n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        pilha2.push(v[i]);
    }
    while (!pilha2.empty())
    {
        cout<<pilha2.top()<<endl;
        pilha2.pop();
    }
    

    return 0;
}