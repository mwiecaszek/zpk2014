#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int o, n;
    cin >> n;
    if( n == 0 )
        o = 1;
    else
        o = ( n % 4 == 0 ) * 6 + ( n % 4 == 1 ) * 2 + ( n % 4 == 2 ) * 4 + ( n % 4 == 3 ) * 8;
    cout << o << endl;

}

