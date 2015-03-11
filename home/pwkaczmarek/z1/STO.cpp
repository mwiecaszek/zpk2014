#include <iostream>
using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;
    if (A >= K && B >= K){
        if(A >= 2 * K && B >= 2 * K)
            cout << (A / K)* 2 + 2 * (B / K) - 4 << endl;
        if (A >= 2 * K && B < 2 * K)
            cout << A / K << endl;
        if (A < 2 * K && B >= 2 * K)
            cout << B / K << endl;
        if(A < 2 * K && B < 2 * K)
            cout << 1 << endl;
    } else
        cout << 0 << endl;
}
