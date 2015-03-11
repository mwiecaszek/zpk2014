#include <iostream>
using namespace std;

int main() 
{
	int n;
		cin >> n;

	int z = 0;

	if(n%4==0)
		z=6;
	if(n%4==1)
		z=2;
	if(n%4==2)
		z=4;
	if(n%4==3)
		z=8;
	
	cout << z << endl;
	
	if (n==0)
		cout << 1 << endl;
}
