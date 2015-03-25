#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double r;

int main(){
    cin >> r;
    cout << fixed;
    cout << setprecision(3) << M_PI*pow(r,2) << endl << 2*M_PI*r << endl;
}
