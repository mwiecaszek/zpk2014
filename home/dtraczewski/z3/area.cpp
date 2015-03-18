#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"

double lengthAB(Point a, Point b)
{
    return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2) + pow(a.getZ() - b.getZ(), 2));
}

double area(Point a, Point b, Point c)
{
    double _a = lengthAB(a, b);
    double _b = lengthAB(a, c);
    double _c = lengthAB(c, b);
    double p = (_a + _b + _c) / 2;

    return sqrt(p * (p - _a) * (p - _b) * (p - _c));
}

int main()
{
    Point p;
    Point q;
    Point r;

    cout << "Podaj wspolrzedne punktu p: ";
    cin >> p; cout << endl;

    cout << "Podaj wspolrzedne punktu q: ";
    cin >> q; cout << endl;

    cout << "Podaj wspolrzedne punktu r: ";
    cin >> r; cout << endl;

    cout << "Punkty: " << p << " " << q << " " << r << endl;
    cout << "Pole: " << area(p, q, r) << endl;

    return 0;
}
