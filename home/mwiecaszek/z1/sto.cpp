#include <iostream>
using namespace std;

int main() {
 int A, B, K;
 cin >> A >> B >> K;
    if (A < K && B < K || A < K && B > K || A > K && B < K)
        cout << "0" << endl;
    if ((A >= K && A < 2 * K) && (B >= K && B < 2 * K))
        cout << "1" << endl;
    if (A >= 2 * K && (B >= K && B < 2 * K))
        cout << A / K << endl;
    if (B >= 2 * K && (A >= K && A < 2 * K))
        cout << B / K << endl;
    if (A >= 2 * K && B >= 2 * K)
        cout << 2 * (A / K) + 2 * ((B - 2 * K) / K) << endl;

}
