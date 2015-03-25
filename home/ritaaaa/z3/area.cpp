#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"



double area(Point a, Point b, Point c)
{  double AB,AC,BC,S,P;
    AB = sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2) + pow(a.getZ() - b.getZ(), 2));
    AC = sqrt(pow(a.getX() - c.getX(), 2) + pow(a.getY() - c.getY(), 2) + pow(a.getZ() - c.getZ(), 2));
    BC = sqrt(pow(b.getX() - c.getX(), 2) + pow(b.getY() - c.getY(), 2) + pow(b.getZ() - c.getZ(), 2));

    P = (AB+AC+BC)/2;
    S=sqrt(P * (P - AB) * (P - AC) * (P - BC));
    return S;
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
