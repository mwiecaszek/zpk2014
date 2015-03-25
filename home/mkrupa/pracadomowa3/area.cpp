#include<iostream>
#include<math.h>
using namespace std;


#include "point.h"


double lenght(Point a, Point b)
{
    return sqrt((b.getX()-a.getX())*(b.getX()-a.getX())+(b.getY()-a.getY())*(b.getY()-a.getY())+(b.getZ()-a.getZ())*(b.getZ()-a.getZ()));
}

double area(Point a, Point b, Point c)
{
    double p = (lenght(a,b)+lenght(b,c)+lenght(c,a))/2.0;

    return sqrt(p*(p-lenght(a,b))*(p-lenght(b,c))*(p-lenght(c,a)));
}

int main()
{
    Point p;
    Point q;
    Point r;

    cout << "WprowadŸ wspó³rzêdne punktu p: ";
    cin >> p;

    cout << "WprowadŸ wspó³rzêdne punktu q: ";
    cin >> q;

    cout << "WprowadŸ wspó³rzêdne punktu r: ";
    cin >> r;

    cout << "Punkty: " << p << " " << q << " " << r << endl;
    cout << "Pole: " << area(p,q,r) << endl;

    return 0;
}
