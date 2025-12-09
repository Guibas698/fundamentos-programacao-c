#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<char> chaves;
    for (char i = 'a'; i <= 'p'; i++) {
        chaves.push(i);
    }
    
    char aux1, aux2;
    int c1, c2;

    while (chaves.size() > 1) {
        cin >> c1 >> c2;
        
        aux1 = chaves.front();
        chaves.pop();
        
        aux2 = chaves.front();
        chaves.pop();
        
        if (c1 > c2) {
            chaves.push(aux1);
        } else {
            chaves.push(aux2);
        }
    }
    
    cout << "A letra vencedora é: " << chaves.front() << endl;

    return 0;
}
