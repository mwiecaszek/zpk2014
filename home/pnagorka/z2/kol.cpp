#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double r;

    cin >> r;

    cout << setprecision(3) << fixed;
    cout << M_PI * pow(r, 2) << endl << 2 * M_PI * r << endl;
}
