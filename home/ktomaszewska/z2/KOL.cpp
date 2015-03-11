#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    double r;
    cin >> r;

    cout << setprecision(3) << fixed;
    double p=M_PI*r*r;
    double o=2*M_PI*r;

    cout << p << endl << o;

}

