#include <iostream>
using namespace std;

int main() {
    int numer, rok, wynik;
    cin >> numer >> rok;
    wynik=numer%10;
    wynik*=2;
    wynik+=5;
    wynik*=50;
    wynik+=1764;
    wynik-=rok;

    cout << wynik << endl;
}
