#include <iostream>
using namespace std;

int main() {
    char litera;
    int cyfra, wynik;

    cin >> cyfra >> litera;

    wynik = cyfra * 16 + (litera - 55);

    cout << wynik << endl;
    cout << (char)wynik << endl;
}

