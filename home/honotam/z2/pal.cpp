#include <iostream>
using namespace std;

int main()
{
    string wyraz, wynik = "TAK";
    int i = 0;
    getline(cin, wyraz);

    while (i < wyraz.length() / 2 && wynik == "TAK")
    {
        if (wyraz[i] != wyraz[wyraz.length() - i - 1])
            wynik = "NIE";
        i++;
    }

    cout << wynik << endl;
}
