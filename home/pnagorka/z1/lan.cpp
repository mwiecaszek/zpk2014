#include <iostream>
using namespace std;

int main()
{
    unsigned int numer_telefonu, rok_urodzenia, wynik;

    cin >> numer_telefonu >> rok_urodzenia;

    wynik = (numer_telefonu % 10) * 2;
    wynik = wynik + 5;
    wynik = wynik * 50;
    wynik = wynik + 1764;
    wynik = wynik - rok_urodzenia;

    cout << wynik << endl;
}
