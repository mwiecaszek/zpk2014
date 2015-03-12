#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int cena[n][m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> cena[i][j];

    int suma_w_sklepie = 0;
    int max_suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            suma_w_sklepie += cena[i][j];
            if (suma_w_sklepie > max_suma)
                max_suma = suma_w_sklepie;
            else
                max_suma;
        }
    }

    int suma = 0;
    int suma_ostateczna = max_suma;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
        if (cena[i][j] < cena[i + 1][j])
            suma += cena[i][j];
        else
            suma += cena[i + 1][j];
        }
        if (suma < suma_ostateczna)
            suma_ostateczna = suma;
        else
            suma_ostateczna;
    }
    cout << suma_ostateczna << endl;
}
