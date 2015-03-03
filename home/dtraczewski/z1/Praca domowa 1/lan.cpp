/*
1. Weź ostatnią cyfrę numeru komórki i pomnóż razy 2 (u mnie 2 · 2 = 4)
2. Do wyniku dodaj 5 (4 + 5 = 9)
3. Pomnóż razy 50 (9 · 50 = 450)
4. Dodaj 1764 (450 + 1764 = 2214)
5. Odejmij swój rok urodzenia (2214 − 1998 = 216!!!)
*/

#include <iostream>
using namespace std;

int main() {
    unsigned int numer, rok, wynik;
    cin >> numer >> rok;
    wynik = numer;
    wynik %= 10;
    wynik *= 2;
    wynik += 5;
    wynik *= 50;
    wynik += 1764;
    wynik -= rok;
    cout << wynik << endl;
}
