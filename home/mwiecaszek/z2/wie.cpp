#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;
    int A, B;
    if (r >= 1800 && r < 1900) {
        A = 23;
        B = 4;
    }
    else if (r >= 1900 && r < 2100) {
        A = 24;
        B = 5;
    }
    else if (r >= 2100 && r < 2200) {
        A = 24;
        B = 6;
    }

    int a = r % 19;
    int b = r % 4;
    int c = r % 7;
    int d = (a * 19 + A) % 30;
    int e = (2 * b + 4 * c + 6 * d + B) % 7;
    int f = d + e + 22;

    int dzien;
    int miesiac;

    if (d == 29 && e == 6) {
        dzien = 19;
        miesiac = 4;
    }
    else if (d == 28 && e == 6) {
        dzien = 18;
        miesiac = 4;
    }
    else if (d + e < 10) {
        dzien = d + e + 22;
        miesiac = 3;
    }
    else {
        dzien = d + e - 9;
        miesiac = 4;
    }

    cout << dzien << " " << miesiac << endl;
}
