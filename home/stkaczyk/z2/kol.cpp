#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;



int main() {
    double r;
    cin >> r;

    cout << setprecision(3) << fixed;
    cout << M_PI*r*r << endl << 2*M_PI*r;

}
