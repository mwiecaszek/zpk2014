#include <iostream>
using namespace std;

int main() {
    int numer, rok;
    cin >> numer >> rok;
    // ost = ostatnia cyfra
    int ost = numer % 10;
    int wynik = ost;
    wynik *= 2;
    wynik += 5;
    wynik *= 50;
    wynik += 1764;
    wynik -= rok;
    cout << wynik << endl;
}
