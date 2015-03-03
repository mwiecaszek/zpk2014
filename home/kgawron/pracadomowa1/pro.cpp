#include <iostream>
using namespace std;

int main() {

    unsigned int a, b, c, Objetosc, Pole_powierzchni;
    cin >> a >> b >> c;

    Objetosc = a * b * c;
    Pole_powierzchni = 2*a*b + 2*b*c + 2*b*c;

    cout << Objetosc << endl
    << Pole_powierzchni << endl;
}
