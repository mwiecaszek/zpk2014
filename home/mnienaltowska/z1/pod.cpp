#include <iostream>
using namespace std;

int main() {
    int a, b, c, wynik;
    cin >> a;
    cin >> b;
    cin >> c;
    wynik = 0;
	for(;a <= b; a++ ){
		if(a%c == 0)
			wynik++;
	}
	cout << wynik << endl;
}
