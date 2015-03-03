#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    if ( b > 2007 ){
    	return 0;
	}
	if ( b < 1920 ){
		return 0;
	}
	int ostatniaLiczba, wynik;
	ostatniaLiczba = a % 10;
	wynik = (( 2 * ostatniaLiczba + 5 ) * 50 + 1764 ) - b;
	cout << wynik << endl;


}
