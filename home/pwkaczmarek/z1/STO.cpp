#include <iostream>
using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;
    if(A >= K && B >= K){
        if(B >= 2 * K)
            cout << A / K * 2 + 2 * (B / K - 2) << endl;
        else
            cout << A / K << endl;
    } else
        cout << 0 << endl;
}
