#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int t[n];
    for( int i = 0; i < n; i++ ){
        cin >> t[i];
    }
    int p = -1, o = -1;
    for( int i = 0; p < 0 && i < n; i++ )
        if( t[i] == x )
            p = i + 1;
    if( p > -1 )
        for( int i = n - 1; o < 0 && i >= -1; i-- )
            if( t[i] == x )
                o = i + 1;
    cout << p << " " << o << endl;
}

