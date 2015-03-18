#include <iostream>
#include <cmath>

using namespace std;

int main(){

double r,pole,obwod;

cin >> r;
pole = M_PI * pow(r,2);
obwod = 2 * M_PI * r;

cout.setf(ios_base::fixed);
cout.setf(ios_base::showpoint);
cout.precision(3);
cout << pole << endl;
cout << obwod << endl;

return 0;

}





