#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> num;
    int tam;

    num.push_back(10);
    num.push_back(2);
    num.push_back(5);
    num.push_back(8);

    tam = num.size();

    cout<<tam<<endl;

    for (int i = 0; i < tam; i++)
    {
        cout<<num[i]<<endl;
    }
    


    return 0;
}