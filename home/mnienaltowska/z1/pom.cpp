#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;
    while( a != -1){
    	cin >> a;
    	if ( a > 0 ){
    		if( c != a)
    			b++;
		}
		c = a;
	}
	cout << b << endl;
}6
