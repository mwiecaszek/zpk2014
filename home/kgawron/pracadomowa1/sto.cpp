#include <iostream>
using namespace std;

int main() {
    unsigned int A, B, K, r, p, maxlczbkrz;
    cin >> A >> B >> K;

    if (A < K || B < K)
        cout << 0 << endl;
    else
{
        r = A/K;
        p = B/K;
        maxlczbkrz = r * p;

    if (r > 2 && p > 2)
        maxlczbkrz = maxlczbkrz - (r - 2)*(p - 2);

        cout << maxlczbkrz << endl;
}}
