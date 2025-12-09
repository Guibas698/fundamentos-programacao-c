
#include <iostream>
#include <queue>
using namespace std;
int main(){

    queue<int>fila1, fila2;
    fila1.push(10);
    fila1.push(20);
    fila1.push(30);
    fila1.push(40);
    fila1.push(50);
    fila1.emplace(60);
    fila1.emplace(70);
    
    cout<<"primeiro elemento da fila:"<< fila1.front()<<endl;
    cout<<"ultimo elemento da fila:"<< fila1.back()<<endl;
    cout<<"o tamanho da fila é:"<< fila1.size()<<endl;
    
    //teste pra ver se consegue ler valores em n
    while(!fila1.empty()){
        cout<<fila1.front();
        fila1.pop();
        if(!fila1.empty()){
            cout<<" - ";
        }
    }
   
    if(fila1.empty()){
        cout<<"\na fila esta vazia"<<endl;
    }
    else{
        cout<<"\nTamanho:"<<fila1.size()<<endl;
    }
    
    cout<<endl<<endl<<endl;
    
    //int n; cin>>n;
    //int v[n];
    //queue<int>teste;
    
    /*for(int i; i<n; i++){
        cin>>v[i];
        teste.push(v[i]);
    }
    
    while(!teste.empty()){
        cout<<teste.front();
        teste.pop();
            }*/
        
    queue<char>chave;
    for(char i='a'; i<='p'; i++){
        chave.push(i);
    }
    
    //teste de leitura pra ver se aparece as letras
    /*while(!chave.empty()){
        cout<<chave.front()<< " "<<endl;
        chave.pop();
    }*/
    
    
    
    
    
    
    return 0;
}