#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double r;
	cin >> r;
	double obwod=2*M_PI*r;
	double pole=M_PI*r*r; 
	cout << setprecision(3) << fixed << pole << endl <<obwod;
}
