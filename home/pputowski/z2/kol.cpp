#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double r, pi = 3.14159265;
    cout << setprecision(3) << fixed;
    cin >> r;
    cout << M_PI * r * r << endl;
    cout << 2 * M_PI * r << endl;
}

