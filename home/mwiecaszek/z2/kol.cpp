#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double r;
    cin >> r;
    double pole = M_PI * r * r;
    double obwod = 2 * M_PI * r;
    cout << setprecision(3) << fixed;
    cout << pole << endl;
    cout << obwod << endl;
}
