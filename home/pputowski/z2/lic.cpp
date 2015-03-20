#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool c = true;
    for( int i = 2; i < n && c == true; i++ )
        c = c && ( n % i != 0 );
    if( c )
        cout << "pierwsza" << endl;
    else
        cout << "zlozona"  << endl;
}

