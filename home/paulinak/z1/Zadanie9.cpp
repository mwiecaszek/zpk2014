#include <iostream>
#include <sstream>
using namespace std;

int main ()
{

        int numer;
        int rok;

        cin >> numer >> rok;

        int ostatnia = numer%10;

        int wiek = ostatnia * 2;
        wiek += 5;
        wiek *= 50;
        wiek += 1764;
        wiek -= rok;

        cout << wiek << endl;
}
