#include <iostream>
#include <string>
using namespace std;

int NWD( int a, int b ){
    int r = a % b;
    while( r != 0 ){
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    int t[n];
    for( int i = 0; i < n; i++ )
        cin >> t[i];
    int a = t[0];
    for( int i = 1; i < n; i++ ){
        a = NWD( a, t[i] );
        a = min( a, t[i] );
    }
    cout << a << endl;

}

