#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"

double vec_len(Point a, Point b){
    return sqrt(pow(a.getX()-b.getX(),2.0) + pow(a.getY()-b.getY(),2.0) + pow(a.getZ()-b.getZ(),2.0));
}

double area(Point a, Point b, Point c){
    double half_perimeter = (vec_len(a,b)+vec_len(a,c)+vec_len(b,c)) / 2.0;
    return sqrt(half_perimeter*(half_perimeter-vec_len(a,b))*(half_perimeter-vec_len(a,c))*(half_perimeter-vec_len(b,c)));
}

int main()
{
    Point p;
    Point q(2.0, 2.0, 2.0);
    Point r(0.0, 3.0, 5.0);

    cout << "Podaj wspolrzedne punktu p: ";
    cin >> p;
    cout << "Punkty: " << p << " " << q << " " << r << endl;
    cout << "Pole: " << area(p,q,r) << endl;

    return 0;
}
