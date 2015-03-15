#include<iostream>
#include<math.h>
using namespace std;

#include "point.h"
#include "triangle.h"

int main()
{
    Point tA, tB, tC;
    Triangle t(&tA, &tB, &tC);
    cout << "Podaj wspolrzedne punktow trojkata:" << endl;
    cout << endl;
    cout << "Punkt A:" << endl;
    cin >> tA;
    cout << "Punkt B:" << endl;
    cin >> tB;
    cout << "Punkt C:" << endl;
    cin >> tC;

    cout << "Pole trojkata wynosi: \n";
    cout << t.getArea();
}
