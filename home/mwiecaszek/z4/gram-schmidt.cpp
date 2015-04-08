#include<iostream>
using namespace std;

#include "point.h"

int main()
{
    Point u, v, w;

    cout << "Podaj sk�adowe wektora u: "; cin >> u;
    cout << "Podaj sk�adowe wektora v: "; cin >> v;
    cout << "Podaj sk�adowe wektora w: "; cin >> w;

    Point a, b, c;

    a = u;
    a.normalize();

    b = v - (v * a) * a;
    b.normalize();

    c = w - (w * a) * a - (w * b) * b;
    c.normalize();

    cout << endl << "Uk�ad po ortogonalizacji." << endl << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
