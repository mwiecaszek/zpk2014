#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    /* 2*(a/k) + 2*((b-2*k)/k)
    2*(b/k) + 2*((a-2*k)/k) */

    if (2*(a/k) + 2*((b-2*k)/k) >= 2*(b/k) + 2*((a-2*k)/k))
        cout << 2*(a/k) + 2*((b-2*k)/k) << endl;

    else
        cout << 2*(b/k) + 2*((a-2*k)/k) << endl;
}


