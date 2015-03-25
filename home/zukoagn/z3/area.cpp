#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"

double odcinek(Point a, Point b)
{
    return sqrt(((a.getX()-b.getX())*(a.getX()-b.getX()))
                +((a.getY()-b.getY())*(a.getY()-b.getY()))
                +((a.getZ()-b.getZ())*(a.getZ()-b.getZ())));
}

double pol_obwodu(Point a, Point b, Point c)
{
    return (odcinek(a,b)+odcinek(b,c)+odcinek(c,a))/2.0;
}


double area(Point a, Point b, Point c)
{
    return sqrt(pol_obwodu(a,b,c)
                *(pol_obwodu(a,b,c)-odcinek(a,b))
                *(pol_obwodu(a,b,c)-odcinek(b,c))
                *(pol_obwodu(a,b,c)-odcinek(c,a)));

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
