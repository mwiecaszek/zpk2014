#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, k, wynik;
    cin >> a >> b >> k;

    if (k>a || k>b) cout << 0 << endl;

    else if(a<2*k || b<2*k)
    cout << max(a/k,b/k) << endl;

    else {
    if (2*(a/k) + 2*((b-2*k)/k) >= 2*(b/k) + 2*((a-2*k)/k))
        cout << 2*(a/k) + 2*((b-2*k)/k) << endl;

    else
        cout << 2*(b/k) + 2*((a-2*k)/k) << endl;
        }

    }

