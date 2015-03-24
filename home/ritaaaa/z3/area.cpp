#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"

double dlugosc(Point a, Point b)
{
    return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2) + pow(a.getZ() - b.getZ(), 2));
}

double area(Point a, Point b, Point c)
{
    double AB = dlugosc(a,b);
    double AC = dlugosc(a,c);
    double CB = dlugosc(c,b);
    double p = (AB+AC+CB)/2;

    return sqrt(p * (p-AB) * (p-AC) * (p-CB));
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
