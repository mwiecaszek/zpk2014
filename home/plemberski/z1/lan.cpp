#include <iostream>
using namespace std;

int main() {
    int t, r, wynik;
    cin >> t >> r;

        if ( r > 2007 )
    	cout << "z³y rocznik" << endl;

        if ( r < 1920 )
		cout << "z³y rocznik" << endl;

/*1*/ wynik = (t % 10)*2;
/*2*/ wynik = wynik += 5;
/*3*/ wynik = wynik *= 50;
/*4*/ wynik = wynik += 1764;
/*5*/ wynik = wynik -= r;

cout << wynik << endl;

}

