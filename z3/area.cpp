#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"

double area_under(Point a, Point b)
{
    return (b.getX() - a.getX()) * (a.getY() + b.getY()) / 2.0;
}

double area(Point a, Point b, Point c)
{
    return fabs(area_under(a,b) + area_under(b,c) + area_under(c,a));
}

int main()
{
    Point p;
    Point q(2, 2);
    Point r(0, 3);

    cout << "Podaj wspolrzedne punktu p: ";
    cin >> p;
    cout << "Punkty: " << p << " " << q << " " << r << endl;
    cout << "Pole: " << area(p,q,r) << endl;

    return 0;
}
