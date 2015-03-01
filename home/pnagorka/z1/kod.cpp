#include <iostream>
using namespace std;

int main()
{
    char pierwszy_znak, drugi_znak;
    unsigned short wynik;

    cin >> pierwszy_znak >> drugi_znak;

    if ((int)drugi_znak >= 65 && (int)drugi_znak <= 70)
        wynik = ((int)pierwszy_znak - 48) * 16 + ((int)drugi_znak - 55);
    else
        wynik = ((int)pierwszy_znak - 48) * 16 + ((int)drugi_znak - 48);

    cout << wynik << endl << (char)wynik << endl;
}
