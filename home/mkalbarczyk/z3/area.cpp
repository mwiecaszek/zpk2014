#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"

double one_side(Point a, Point b)
{
    return sqrt(pow(a.getX()-b.getX(),2)+pow(a.getY()-b.getY(),2)+pow(a.getZ()-b.getZ(),2));
}

double half_circuit(Point a, Point b, Point c)
{
    return (one_side(a,b)+one_side(b,c)+one_side(a,b))/2;
}

double area(Point a, Point b, Point c)
{
    double p = half_circuit(a, b, c);
    double AB = one_side(a,b);
    double BC = one_side(b,c);
    double AC = one_side(a,c);
    return sqrt(p*(p-AB)*(p-BC)*(p-AC));
}



int main()
{
    Point p;
    Point q;
    Point r;

    cout << "Podaj wspolrzedne punktu p (z dokladnoscia do 1 miejsca po przecinku): ";
    cin >> p;

    cout << "Podaj wspolrzedne punktu q (z dokladnoscia do 1 miejsca po przecinku): ";
    cin >> q;

    cout << "Podaj wspolrzedne punktu r (z dokladnoscia do 1 miejsca po przecinku): ";
    cin >> r;

    cout << "Punkty: " << p << " " << q << " " << r << endl;
    cout << "Pole: " << area(p,q,r) << endl;

    return 0;
}
