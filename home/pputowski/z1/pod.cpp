#include <iostream>
using namespace std;

int main() {
    unsigned int a, b, k, w;
    cin >> a >> b >> k;
    w = ( b - a ) / k;
    if( b % k <= ( b - a ) % k )
        w ++;
    cout << w << endl;
}
