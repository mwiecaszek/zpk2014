#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


main() {
   double r, p, o;
   cin >> r;
   const double pi = M_PI;
   p = pi * r * r;
   o = 2 * pi * r;
   cout << setprecision(3) << fixed;
   cout << p << endl << o;
}
