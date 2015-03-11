#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, m, suma, sumas, sumap;
    cin >> n >> m;
    int t[n][m];
    for( int i = 0; i < n; i++ )
        for( int j = 0; j < m; j++ )
            cin >> t[i][j];
    suma = 0;
    for( int i = 1; i < n; i++ ){
        sumas = 0;
        for( int j = 0; j < i; j++ ){
            sumap = 0;
            for( int k = 0; k < m; k++ ){
                sumap = sumap + t[j][k] * ( t[j][k] < t[i][k] ) + t[i][k] * ( t[j][k] >= t[i][k] );
            }
            sumas = sumas * ( sumas < sumap ) + sumap * ( sumap <= sumas || sumas == 0 );
        }
        suma = sumas * ( sumas < suma  || suma == 0 ) + suma * ( suma <= sumas );
    }
    cout << suma << endl;

}

