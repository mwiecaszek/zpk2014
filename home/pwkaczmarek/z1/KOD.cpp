#include <iostream>
using namespace std;

int main() {
    char z1,z2;
    int wynik;
    cin >> z1 >> z2;
    wynik = ((int)z1 - 48)*16;
    if(z2 >= 48 && z2 <= 57)
        wynik += z2;
    else
        wynik += (int)z2 - 55;

    cout << wynik << endl << (char)wynik << endl;
}
