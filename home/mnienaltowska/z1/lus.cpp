#include <iostream>
using namespace std;

int main() {
    int a, b, c, wynik;
    cin >> a;
    b = 10;
    c = 0;
    wynik = 0;
    while( a > 0){
		c = a % 10;
		wynik = wynik * 10 + c ;
		a = (a - c )/10;
		b = b * 10;
	}
	cout << wynik << endl;
}
