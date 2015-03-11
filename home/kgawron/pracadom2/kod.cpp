#include <iostream>
using namespace std;
int main() {
char z1, z2;
cin >> z1 >> z2;
int x = z2;

    if (x > 65)
x = x-55;
    else
x = x-48;
int wynik = (z1 - 48) * 16 + x;

cout << wynik << endl;
cout << char(wynik) << endl;
}
