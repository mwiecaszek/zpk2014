#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
double r;
cin >> r;
cout << setprecision(3) << fixed;
cout << pow(r,2)*M_PI << endl;
cout << 2*M_PI*r << endl;
}
