#include<iostream>
#include<math.h>
using namespace std;

#include "point2.h"

double area_under(Point a, Point b)
{
    //return (b.getX() - a.getX()) * (a.getY() + b.getY()) / 2.0;
    return sqrt((a.getX()-b.getX())*(a.getX()-b.getX())+(a.getY()-b.getY())*(a.getY()-b.getY())+(a.getZ()-b.getZ())*(a.getZ()-b.getZ()));
    return sqrt(p*(p-ab)*(p-bc)*(p-ac));

}

double area(Point a, Point b, Point c)
{
    //return fabs(area_under(a,b) + area_under(b,c) + area_under(c,a));
    double p=(ab+bc+ac)*0.5;
    return sqrt(p*(p-ab)*(p-bc)*(p-ac));
}

int main()
{
    Point p;
    Point q(2.0, 2.0);
    Point r(0.0, 3.0);

    cout << "Podaj wspolrzedne punktu p: ";
    cin >> p;
    cout << "Punkty: " << p << " " << q << " " << r << endl;
    cout << "Pole: " << area(p,q,r) << endl;

    return 0;
}
