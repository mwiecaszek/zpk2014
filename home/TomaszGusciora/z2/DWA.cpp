#include <iostream>
using namespace std;
int main()
{
    unsigned short n, m, i, j, k;
    cin >> n >> m;
    unsigned int market[n][m], wynik = 0, koszt;

    for (i = 0; i <= n - 1; i++)
        for (k = 0; k <= m - 1; k++)
            cin >> market[i][k];
    for (i = 0; i <= n - 2; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        {
            koszt = 0;
            for (k = 0; k <= m - 1; k++)
                koszt = koszt + min(market[i][k], market[j][k]);
            if (i == 0 && j == 1)
                wynik = koszt;
            else
                wynik = min(wynik, koszt);
        }
    }
    cout << wynik << endl;
}
