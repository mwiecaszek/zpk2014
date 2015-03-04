#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    int aa, bb;
    aa = a;
    bb = b;
    if( bb >= 65 )
        cout << ( aa - 48 ) * 16 + ( bb - 55 ) << endl <<
        char( ( aa - 48 ) * 16 + ( bb - 55 ) ) << endl;
    else
        cout << ( aa - 48 ) * 16 + ( bb - 48 ) << endl <<
        char( ( aa - 48 ) * 16 + ( bb - 48 ) ) << endl;
}
