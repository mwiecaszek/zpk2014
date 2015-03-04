#include <iostream>
using namespace std;

int main() {
    unsigned int a, b, k;
    cin >> a >> b >> k;
    if( k > a || k > b )
        cout << "0" << endl;
    else if( a / k == 1 || b / k == 1 )
        cout << ( a / k ) * ( b / k ) << endl;
    else
        cout << 2 * ( a / k - 1 ) + 2 * ( b / k - 1 ) << endl;


}
