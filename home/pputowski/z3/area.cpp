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
    //AB
    double A = sqrt( ( a.Getx - b.x ) * ( a.x - b.x ) + ( a.y - b.y ) * ( a.y - b.y ) + ( a.z - b.z ) * ( a.z - b.z ) );
    //BC
    double B = sqrt( ( b.x - c.x ) * ( b.x - c.x ) + ( b.y - c.y ) * ( b.y - c.y ) + ( b.z - c.z ) * ( b.z - c.z ) );
    //CA
    double C = sqrt( ( c.x - a.x ) * ( c.x - a.x ) + ( c.y - a.y ) * ( c.y - a.y ) + ( c.z - a.z ) * ( c.z - a.z ) );

    double p = ( A + B + C ) / 2;

    return sqrt( p * ( p - A ) * ( p - B ) * ( p - C ) )
}

int main()
{
    Point p;
    Point q(2.0, 2.0, 1.0);
    Point r(0.0, 3.0, 1.0);

    cout << "Podaj wspolrzedne punktu p: ";
    cin >> p;

    cout << "Punkty: " << p << " " << q << " " << r << endl;
    cout << "Pole: " << pole( p, q, r ) << endl;

    return 0;
}
