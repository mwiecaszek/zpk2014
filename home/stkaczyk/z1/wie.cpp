#include <iostream>
using namespace std;

int main() {
    int r, A, B, a, b, c, d, e, dzien, miesiac;
    cin >> r;

    if (r >= 1800 && r <= 1899) {
        A = 23;
        B = 4;
    }
    if (r >= 1900 && r <= 2099){
        A = 24;
        B = 5;
    }
    if (r >= 2100 && r <= 2199){
        A = 24;
        B = 6;
    }
    a = r%19;
    b = r%4;
    c = r%7;
    d = (19*a + A)%30;
    e = (2*b + 4*c + 6*d + B)%7;

    dzien = 22 + d + e;
    miesiac = 3;

    if (dzien > 31){
        miesiac += 1;
        dzien -= 31;
    }
    if (d == 29 && e == 6)
        dzien = 19;

    if (d == 28 && e == 6 && a > 10)
        dzien = 18;

    cout << dzien << " " << miesiac << endl;

}
