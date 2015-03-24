#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"



double area(Point a, Point b, Point c)
{  double x,y,z,v,P;
    x = sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2) + pow(a.getZ() - b.getZ(), 2));
    y = sqrt(pow(a.getX() - c.getX(), 2) + pow(a.getY() - c.getY(), 2) + pow(a.getZ() - c.getZ(), 2));
    z = sqrt(pow(b.getX() - c.getX(), 2) + pow(b.getY() - c.getY(), 2) + pow(b.getZ() - c.getZ(), 2));

    v = (x + y + z) / 2;
    P=sqrt(v * (v - x) * (v - y) * (v - z));
    return P;
}

int main()
{
    Point p;
    Point q;
    Point r;

    cout << "Podaj wspolrzedne punktu p: ";
    cin >> p;

    cout << "Podaj wspolrzedne punktu q: ";
    cin >> q;

    cout << "Podaj wspolrzedne punktu r: ";
    cin >> r;

    cout << "Punkty: " << p << " " << q << " " << r << endl;
    cout << "Pole: " << area(p,q,r) << endl;

    return 0;
}
