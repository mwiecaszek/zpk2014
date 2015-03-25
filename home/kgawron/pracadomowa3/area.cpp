#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"

double area(Point a, Point b, Point c)

{
    double k,l,m,p,P;
    k = sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2) + pow(a.getZ() - b.getZ(), 2));
    l = sqrt(pow(a.getX() - c.getX(), 2) + pow(a.getY() - c.getY(), 2) + pow(a.getZ() - c.getZ(), 2));
    m = sqrt(pow(b.getX() - c.getX(), 2) + pow(b.getY() - c.getY(), 2) + pow(b.getZ() - c.getZ(), 2));

    p = (k + l + m) / 2;
    P=sqrt(p * (p - k) * (p - l) * (p - m));

return P;

}

int main()

{
    Point r;
    Point s;
    Point t;

    cout << "Podaj wspolrzedne punktu r: ";
    cin >> r;
    cout << "Podaj wspolrzedne punktu s: ";
    cin >> s;
    cout << "Podaj wspolrzedne punktu t: ";
    cin >> t;


    cout << "Punkty: " << r << " " << s << " " << t << endl;
    cout << "Pole: " << area(r,s,t) << endl;

return 0;

}
