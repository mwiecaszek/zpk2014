#include<iostream>
using namespace std;

int main(){
	
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a+b<=c)
		cout << "NIE";
		
	else if (b+c<=a)
		cout << "NIE";
		
	else if (c+a<=b)
		cout << "NIE";
		
	else
		cout << "TAK";
	
}
