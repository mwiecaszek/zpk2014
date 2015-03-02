#include<iostream>
using namespace std;

int main(){
	
	int a, b;
	cin >> a >> b;
	if (a==0 && b==0)
		cout << "0";
	else if (a==0 && b!=0)
		cout << "OY";
	else if (a!=0 && b==0)
		cout << "OX";
	else {
		if (a>0 && b>0)
			cout << "I";
		else if (a<0 && b>0)
			cout << "II";
		else if (a<0 && b<0)
			cout << "III";
		else
			cout << "IV";
	}
	
}
