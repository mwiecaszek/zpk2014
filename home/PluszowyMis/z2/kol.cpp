#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double r, result;
	
	cin >> r;
	
	result = r * M_PI * r; 
	printf("%.3lf\n", result);
	result = 2 * r * M_PI;
	printf("%.3lf", result);
	
}
