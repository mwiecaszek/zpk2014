#include <iostream>
using namespace std;

int main() {
    int wynik, nr, rok;
    cin >> nr >> rok;
    nr %= 100000000;
    nr %= 10000000;
    nr %= 1000000;
    nr %= 100000;
    nr %= 10000;
    nr %= 1000;
    nr %= 100;
    nr %= 10;
    wynik = (nr * 2 + 5) * 50 + 1764 - rok;
    cout << wynik << endl;
}
