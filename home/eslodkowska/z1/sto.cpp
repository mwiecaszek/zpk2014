#include<iostream>
using namespace std;

int main() {
    int A, B, K, c;
    cin >> A >> B >> K;
    if (A < B) {
        c = A; A = B; B = c;
    }
    int ile_A, ile_B, max_K;

    if (A == K && B == K) max_K = 1;

    else if (A > K && B == K)
        max_K = A / K;

    else if (A > K && B > K) {
        ile_A = A / K;
        ile_B = (B - 2 * K);
        if (ile_B > 0) {
            ile_B /= K;
            max_K = 2 * ile_A + 2 * ile_B;
        }
        else if (ile_B < 0)
            max_K = ile_A;
        else
            max_K = 2 * ile_A;
    }
    else
        max_K = 0;
    cout << max_K << endl;
}
