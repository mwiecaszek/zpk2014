#include <iostream>
using namespace std;

int main()  {
    unsigned short r, d, m,
        a, b, c, x, e, f, g, h, i, k, l, y, p;
    cin >> r;
    a = r%19;
    b = r/100;
    c = r%100;
    x = b/4;
    e = b%4;
    f = (b + 8)/25;
    g = (b - f + 1)/3;
    h = (19 * a + b - x - g + 15)%30;
    i = c/4;
    k = c%4;
    l = (32 + 2*e + 2*i - h - k)%7;
    y = (a + 11*h + 22*l)/451;
    p = (h + l - 7*y + 114)%31;
    d = p + 1;
    m = (h + l - 7*y + 114)/31;
    cout << d << " " << m << endl;
}
