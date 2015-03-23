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

double pole( Point a, Point b, Point c )
{
    double AB, BC, CA, p;
    AB = sqrt( ( b.getX() - a.getX() ) * ( b.getX() - a.getX() ) + ( b.getY() - a.getY() ) * ( b.getY() - a.getY() )
               + ( b.getZ() - a.getZ() ) * ( b.getZ() - a.getZ() ) );
    BC = sqrt( ( c.getX() - b.getX() ) * ( c.getX() - b.getX() ) + ( c.getY() - b.getY() ) * ( c.getY() - b.getY() )
               + ( c.getZ() - b.getZ() ) * ( c.getZ() - b.getZ() ) );
    CA = sqrt( ( a.getX() - c.getX() ) * ( a.getX() - c.getX() ) + ( a.getY() - c.getY() ) * ( a.getY() - c.getY() )
               + ( a.getZ() - c.getZ() ) * ( a.getZ() - c.getZ() ) );
    p = ( AB + BC + CA ) / 2;
    return sqrt( p * ( p - AB ) * ( p - BC ) * ( p - CA ) );
}

int main()
{
    Point a;
    Point b;
    Point c;

    cout << "Podaj wspolrzedne punktu a: ";
    cin >> a;

    cout << "Podaj wspolrzedne punktu b: ";
    cin >> b;

    cout << "Podaj wspolrzedne punktu c: ";
    cin >> c;

    cout << "Punkty: " << a << " " << b << " " << c << endl;
    cout << "Pole: " << pole( a, b, c ) << endl;

    return 0;
}
