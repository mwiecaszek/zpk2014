#include <iostream>
using namespace std;

int main()  {
    char pierwszy, drugi;
    unsigned short wynik;
    cin >> pierwszy >> drugi;
    if ((int)drugi >= 65 && (int)drugi <= 70)
        wynik = ((int)pierwszy - 48)*16 + ((int)drugi - 55);
    else
        wynik = ((int)pierwszy - 48)*16 + ((int)drugi - 48);
    cout << wynik << endl << (char)wynik << endl;
}
