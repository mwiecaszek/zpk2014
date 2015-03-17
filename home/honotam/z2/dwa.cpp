#include <iostream>
using namespace std;

int main()
{
    unsigned short n, m, i, j, k;
    cin >> n >> m;

    unsigned int market[n][m], wynik = 0, laczny_koszt;

    for (i = 0; i <= n - 1; i++)
        for (k = 0; k <= m - 1; k++)
            cin >> market[i][k];

    for (i = 0; i <= n - 2; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        {
            laczny_koszt = 0;
            for (k = 0; k <= m - 1; k++)
                laczny_koszt = laczny_koszt + min(market[i][k], market[j][k]);
            if (i == 0 && j == 1)
                wynik = laczny_koszt;
            else
                wynik = min(wynik, laczny_koszt);
        }
    }

    cout << wynik << endl;
}
