#include <iostream>
using namespace std;

int main() {
    int r, d, m;
    int a, b, c, e, f;
    cin >> r;
    a = r % 19;
    b = r % 4;
    c = r % 7;

    if (r >= 1800 && r < 1900) {
        f = (a * 19 + 23) % 30;
        e = (2 * b + 4 * c + 6 * f + 4) % 7;
    }
    else if (r >= 1900 && r < 2100) {
        f = (a * 19 + 24) % 30;
        e = (2 * b + 4 * c + 6 * f + 5) % 7;
    }
    else {
        f = (a * 19 + 24) % 30;
        e = (2 * b + 4 * c + 6 * f + 6) % 7;
    }
    cout  << e + f << endl;
    if (r == 1981 || r == 2076 || r == 2133) {
        d = 19;
        m = 4;
    }
    else if (r == 1954 || r == 2049 || r == 2106) {
        d = 18;
        m = 4;
    }
    else {
        if (e + f < 10) {
            d = 22 + (e + f);
            m = 3;
        }
        else {
            d = (e + f) - 9;
            m = 4;
        }
    }
    cout << d << " " << m;
}
