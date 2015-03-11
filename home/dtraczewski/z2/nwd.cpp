#include <iostream>
using namespace std;

int nwd (int a, int b) {
    int r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main() {
    unsigned short n, a, x;
    cin >> n;
    cin >> a;
    x = a;
    for (unsigned short i = 2; i <= n; i++) {
        cin >> a;
        x = nwd(x, a);
    }
    cout << x << endl;
}
