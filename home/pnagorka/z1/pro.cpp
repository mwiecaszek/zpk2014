#include <iostream>
using namespace std;

int main()
{
    unsigned int a, b, c, objetosc, pole_powierzchni;

    cin >> a >> b >> c;

    objetosc = a * b * c;
    pole_powierzchni = 2 * (a * b + a * c + b * c);

    cout << objetosc << endl << pole_powierzchni << endl;
}
