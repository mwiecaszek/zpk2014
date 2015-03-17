#include <iostream>
using namespace std;

int main()
{
    unsigned int n, x, i;
    cin >> n >> x; // pierwszy wiersz

    unsigned int t[n];
    for (i = 0; i <= n - 1; i++)
        cin >> t[i]; //ceny akcji spó³ki w kolejnych dniach

    int wynik_1 = -1, wynik_2 = -1;

    for (i = 0; i <= n - 1; i++)
    {
        if (t[i] == x && wynik_1 == -1)
        {
            wynik_1 = i + 1;
            wynik_2 = wynik_1;
        }
        else if (t[i] == x)
            wynik_2 = i + 1;
    }

    cout << wynik_1 << " " << wynik_2 << endl;
}
