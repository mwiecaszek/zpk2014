#include <iostream>
using namespace std;

main() {
    int t, r; //t - nr tel, r -rok ur.
    cin >> t >> r;
    t %= 10;
    t *= 2;
    t += 5;
    t *= 50;
    t += 1764;
    t -= r;
    cout << t;
}
