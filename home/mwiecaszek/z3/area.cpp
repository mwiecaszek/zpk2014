#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"

double area(Point a, Point b, Point c)
{
    double x, y, z, p, P;

    x = sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2) + pow(a.getZ() - b.getZ(), 2));
    y = sqrt(pow(b.getX() - c.getX(), 2) + pow(b.getY() - c.getY(), 2) + pow(b.getZ() - c.getZ(), 2));
    z = sqrt(pow(a.getX() - c.getX(), 2) + pow(a.getY() - c.getY(), 2) + pow(a.getZ() - c.getZ(), 2));

    p = (x + y + z) / 2;

    P = sqrt(p * (p - x) * (p - y) * (p - z));
    return P;
}

int main()
{
    Point d;
    Point e;
    Point f;

    cout << "Podaj wspolrzedne punktu d: ";
    cin >> d;
    cout << "Podaj wspolrzedne punktu e: ";
    cin >> e;
    cout << "Podaj wspolrzedne punktu f: ";
    cin >> f;
    cout << "Punkty: " << d << " " << e << " " << f << endl;
    cout << "Pole: " << area(d, e, f) << endl;

    return 0;
}
