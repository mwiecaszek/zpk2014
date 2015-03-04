#include <iostream>
using namespace std;

int main()  {
    unsigned int numtel, rokur, wynik;
    cin >> numtel >> rokur;
    wynik = (numtel%10)*2;
    wynik = wynik+5;
    wynik = wynik*50;
    wynik = wynik+1764;
    wynik = wynik-rokur;
    cout << wynik << endl;
}
