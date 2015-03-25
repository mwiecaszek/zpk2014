#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"

double odc (Point a, Point b) {
    return sqrt (pow (a.getX() - b.getX(), 2) + pow (a.getY() - b.getY(), 2) + pow (a.getZ() - b.getZ(), 2));
}

double area(Point a, Point b, Point c)
{   double p = (odc(a, b) + odc(b, c) + odc(a, c)) / 2;
    return sqrt(p * (p - odc(a, b)) * (p - odc(b, c)) * (p - odc(a, c)));
}

int main()
{
    Point a, b, c;

    cout << "Podaj wspolrzedne punktu A: ";
    cin >> a;
    cout << "Podaj wspolrzedne punktu B: ";
    cin >> b;
    cout << "Podaj wspolrzedne punktu C: ";
    cin >> c;

    cout << "Punkty: " << a << " " << b << " " << c << endl;
    cout << "Pole: " << area(a, b, c) << endl;

    return 0;
}
