#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"

double pole(Point a, Point b, Point c)
{
    double AB, AC, BC, p;
    AB = sqrt(pow(b.getX()-a.getX(),2) + pow(b.getY()-a.getY(),2) + pow(b.getZ()-a.getZ(),2));
    AC = sqrt(pow(c.getX()-a.getX(),2) + pow(c.getY()-a.getY(),2) + pow(c.getZ()-a.getZ(),2));
    BC = sqrt(pow(c.getX()-b.getX(),2) + pow(c.getY()-b.getY(),2) + pow(c.getZ()-b.getZ(),2));
    p = (AB + AC + BC) / 2;

    return sqrt(p * (p - AB) * (p - AC) * (p - BC));
}

int main()
{
    Point A;
    Point B;
    Point C;

    cout << "Podaj wspolrzedne punktu A: ";
    cin >> A;

    cout << "Podaj wspolrzedne punktu B: ";
    cin >> B;

    cout << "Podaj wspolrzedne punktu C: ";
    cin >> C;

    cout << "Punkty: " << A << " " << B << " " << C << endl;
    cout << "Pole: " << pole(A,B,C) << endl;

    return 0;
}
