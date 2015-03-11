#include <iostream>
#include <string>
using namespace std;

int mniejszaod( int t[], int n, int m ){
    int a = 0;
    for( int i = 0; i < n; i++ )
        if( t[i] > a && t[i] < m )
            a = t[i];
    return a;
}

int main() {
    int n;
    cin >> n;
    int t[n];
    for( int i = 0; i < n; i++ )
        cin >> t[i];
    cout << mniejszaod( t, n, mniejszaod( t, n, 1000001 ) ) << endl;

}

