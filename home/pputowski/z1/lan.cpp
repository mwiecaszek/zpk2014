#include <iostream>
using namespace std;

int main() {
    unsigned int t, r, w;
    cin >> t >> r;
    w = ( t - t / 10 * 10 ) * 2;
    w += 5;
    w *= 50;
    w += 1764;
    w -= r;
    cout << w << endl;
}
