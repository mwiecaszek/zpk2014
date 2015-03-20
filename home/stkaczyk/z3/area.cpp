#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"

double dlugosc(Point a, Point b)
{
    return sqrt((b.getX()-a.getX())*(b.getX()-a.getX())+(b.getY()-a.getY())*(b.getY()-a.getY())+(b.getZ()-a.getZ())*(b.getZ()-a.getZ()));
}

double area(Point a, Point b, Point c)
{
    double p = (dlugosc(a,b)+dlugosc(b,c)+dlugosc(c,a))/2.0;
    return sqrt(p*(p-dlugosc(a,b))*(p-dlugosc(b,c))*(p-dlugosc(c,a)));
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
