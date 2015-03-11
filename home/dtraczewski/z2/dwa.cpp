#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned short n, m;
    cin >> n >> m;
    unsigned int koszt, wynik;
    unsigned short t[n][m];
    for (unsigned short i = 0; i < n; ++i)
        for (unsigned short j = 0; j < m; ++j)
            cin >> t[i][j];
    for (unsigned short i = 0; i < n -1 ; ++i){
        for (unsigned short j = i + 1; j < n ; ++j){
            koszt = 0;
            for (unsigned short k = 0; k < m ; ++k)
                koszt += min(t[i][k], t[j][k]);
            if (i == 0 && j == 1)
                wynik = koszt;
            else
                wynik = min(wynik, koszt);
        }
    }
    cout << wynik << endl;
}
