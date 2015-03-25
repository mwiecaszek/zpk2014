#include <iostream>
using namespace std;

int n, m;
int t[100][100];

int najtansze_prod(int s1, int s2){
    int koszt = 0;
    for (int j = 0; j < m; j++)
    {   if (t[s1][j] > t[s2][j])
           koszt += t[s2][j];
        else
           koszt += t[s1][j];
    }
    return koszt;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)  // n to numer marketu
        for (int j = 0; j < m; j++) // m to cena produktu
            cin >> t[i][j];

    int min = najtansze_prod(0,1);

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (min > najtansze_prod(i,j))
                min = najtansze_prod(i,j);

    cout << min;
}
