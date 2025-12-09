#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    char mat[n][m];
    for (int i = 0; i < m ; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
        
    }
    

    return 0;
}