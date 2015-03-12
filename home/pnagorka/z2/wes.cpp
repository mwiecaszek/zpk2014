#include <iostream>
using namespace std;

int main()
{
    unsigned int z;

    cin >> z;

    unsigned int i, j, n[z], d[z], pozycja, wynik;

    for (i = 0; i <= z - 1; i++)
        cin >> n[i] >> d[i];

    for (i = 0; i <= z - 1; i++)
    {
        unsigned int skoki[n[i]];

        for (j = 0; j <= n[i] - 1; j++)
            skoki[j] = 1;

        pozycja = 0;
        wynik = 0;

        while (wynik < n[i])
        {
            pozycja = (pozycja + d[i]) % n[i];
            if (skoki[pozycja] == 0)
                break;
            skoki[pozycja] = 0;
            wynik++;
        }

        cout << wynik << endl;
    }
}
