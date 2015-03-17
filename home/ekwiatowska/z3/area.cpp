#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"



double dlugosc(Point a, Point b)
{
    double x2, y2, z2;
    x2=(a.getX()-b.getX())*(a.getX()-b.getX());
    y2=(a.getY()-b.getY())*(a.getY()-b.getY());
    z2=(a.getZ()-b.getZ())*(a.getZ()-b.getZ());
    return sqrt(x2+y2+z2);
}

double pole(Point a, Point b, Point c)
{
    double p;
    p=(dlugosc(b,c)+dlugosc(c,a)+dlugosc(a,b))/2;
    return sqrt(p*(p-dlugosc(b,c))*(p-dlugosc(c,a))*(p-dlugosc(a,b)));
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
    cout << "Pole: " << pole(p,q,r) << endl;

    return 0;
}
