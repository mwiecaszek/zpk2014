#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    if ( a == 0 ){
    	if ( b == 0 ){
			cout << 0 << endl;
		}
		else{
			cout << "OY" << endl;
		}
	}else{
		if ( b == 0 ){
			cout << "OX" << endl;
		}
		else{
			if ( a > 0 && b > 0 ){
				cout << "I" << endl;
			}
			if ( a < 0 && b > 0 ){
				cout << "II" << endl;
			}
			if ( a < 0 && b < 0 ){
				cout << "III" << endl;
			}
			if ( a > 0 && b < 0 ){
				cout << "IV" << endl;
			}
		}
	}
}
